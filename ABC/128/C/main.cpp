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
const int INF = 1 << 30;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> k(m), p(m);
    vector<vector<int>> s(m);
    rep(i,m) {
        cin >> k[i];
        rep(j,k[i]) {
            int sk;
            cin >> sk;
            s[i].push_back(sk);
            s[i][j]--;
        }
    }
    rep(i,m) cin >> p[i];

    int ans = 0;
    vector<vector<int>> a(m);   // 電球に対していくつのスイッチがonされているか格納
    rep(i,1<<n) {   // スイッチの組み合わせ(0~2^n-1)
        rep(b, a.size()) a[b].clear();
        rep(j,n) {  // j番目のスイッチがon（j番目のビットが立っている）か判断
            if (i>>j&1) {   // j番目のスイッチがonの時の処理
                rep(x,s.size()) {
                    rep(y,s[x].size()) {
                        if (s[x][y] == j) a[x].push_back(j);
                    }
                }
            }
        }
        bool ok = true;
        rep(k,m) {
            if (p[k] != (a[k].size() % 2)) {
                ok = false;
                break;
            }
        }
        if (ok) ans++;
    }

    cout << ans << endl;
    return 0;
}