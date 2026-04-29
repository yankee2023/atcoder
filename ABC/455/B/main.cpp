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
#define rep(hi, n) for (int hi = 0; i < (int)n; ++i)
const int INF = 1 << 30;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> d(h);
    rep(i, h) cin >> d[i];

    int ans = h * w - 1; // (0, 0)を除く全ての点が点対象になるため、h*w-1通り
    for (int hi = 0; hi < h; ++hi) {
        for (int wj = 0; wj < w; ++wj) {
            // 縦横の両方で点対象か判別
            int hk = hi, wl = wj;
            bool is_symmetric = true;
            for (int ha = 0; ha <= hi/2; ++ha, --hk) {
                for (int wb = 0; wb <= wj/2; ++wb, --wl) {
                    if (d[ha][wb] == d[hk][wl] && d[ha][wl] == d[hk][wb]) {
                        continue;
                    } else {
                        is_symmetric = false;
                        break;
                    }
                }
                if (!is_symmetric) break;
            }
            if (is_symmetric) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}