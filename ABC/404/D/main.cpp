#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = 1001001001;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> c(n);
    rep(i,n) cin >> c[i];
    vector<int> k(m);
    vector<vector<int>> a(m, vector<int>(m));
    vector<vector<int>> zoo(n);
    rep(i,m) {
        cin >> k[i];
        rep(j,k[i]) {
            cin >> a[i][j];
            a[i][j]--;
        }
        rep(j,k[i]) {
            zoo[a[i][j]].push_back(i);
        }
    }

    vector<bool> ok(m);
    int ans = INF;
    rep(i,1<<n) {   // 動物園の選び方
        int result = 0;
        bool allOk = true;
        rep(j,ok.size()) ok[j] = false;
        rep(j,n) {
            if (i>>j&1) {
                rep(k,zoo[j].size()) ok[zoo[j][k]] = true;
                result += c[j];
            }

            allOk = true;
            rep(k,m) {
                if (!ok[k]) {
                    allOk = false;
                    break;
                }
            }
            if (allOk) break;
        }
        if (allOk && result != 0) ans = min(ans, result);
    }

    cout << ans*2 << endl;
    return 0;
}