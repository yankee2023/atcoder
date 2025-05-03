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

void DFS()
{
    int 
}

int a[12][12];

/**
 * @brief ビット全探索
 */
void BitBruteForce()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    rep(i,n) {
        cin >> c[i];
        rep(j,m) cin >> a[i][j];
    }

    int ans = INF;
    rep(s, 1<<n) {  // 0~(2^n)-1まで繰り返す
        int cost = 0;
        vector<int> d(m);
        rep(i,n) {
            if (s>>i&1) {   // sのibit目が立っているかの判定
                cost += c[i];
                rep(j,m) d[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(j,m) if (d[j] < x) ok = false;
        if (ok) ans = min(ans, cost);
    }

    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}

int main()
{
    BitBruteForce();
    return 0;
}