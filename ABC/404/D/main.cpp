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

void solve1()
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
}

/**
 * @brief 各動物園に訪れる回数を3進数で表現
 * 
 */
void solve_ans()
{
    int n, m;
    cin >> n >> m;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    vector<vector<int>> a(m);
    rep(i,m) {
        int k;
        cin >> k;
        a[i] = vector<int>(k);
        rep(j,k) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    // 3のべき乗を求めておく
    vector<int> p3(n+1,1);
    rep(i,n) p3[i+1] = p3[i]*3;

    const ll inf = 1e18;
    ll ans = inf;
    rep(s,p3[n]) {  // 末尾が3のn乗となる
        vector<int> t(n);   // 各動物園へ訪れる回数
        rep(i,n) t[i] = s/p3[i]%3;  // i桁目が取れる
        ll cost = 0;
        rep(i,n) cost += c[i]*t[i];
        rep(j,m) {
            int cnt = 0;
            for (int i : a[j]) cnt += t[i];
            if (cnt < 2) cost = inf;
        }
        ans = min(ans, cost);
    }

    cout << ans << endl;
}

int main()
{
    solve_ans();
    return 0;
}