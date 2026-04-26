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
    int h, w;
    cin >> h >> w;
    vector<string> d(h);
    rep(i, h) cin >> d[i];

    int ans = 0;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            // i~h,j~w範囲までの図形が点対象かどうかを判定
            // 180度回転させたときに一致すれば点対象とみなす
            
        }
    }

    cout << ans << endl;
    return 0;
}