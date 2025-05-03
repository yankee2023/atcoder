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
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> c(h+1);
    rep(i,h) cin >> c[i];

    int ans = 0;
    rep(g,1<<h) {   // 行の選び方
        rep(r,1<<w) {   // 列の選び方
            vector<string> cCopy = c;
            int cnt = 0;    // 黒のカウント

            // 選んだ行を全て白(.)にする
            rep(i,h) {
                if (g>>i&1) {
                    rep(j,w) cCopy[i][j] = '.';
                }
            }

            // 選んだ列を全て(.)にする
            rep(i,w) {
                if (r>>i&1) {
                    rep(j,h) cCopy[j][i] = '.';
                }
            }

            // "#"を数える
            rep(i,h) rep(j,w) {
                if (cCopy[i][j] == '#') cnt++;
            }

            if (cnt == k) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}