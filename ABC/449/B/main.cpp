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
    int h, w, q;
    cin >> h >> w >> q;

    rep(i, q) {
        vector<vector<bool>> table(h, vector<bool>(w, true));
        int type;
        cin >> type;
        if (type == 1) {
            int r;
            cin >> r;
            int cnt = 0;
            for (int j = h-r; j < h; ++j) {
                for (int k = 0; k < w; ++k) {
                    cnt++;
                }
            }
            cout << cnt << endl;
            h -= r;
        } else {
            int c;
            cin >> c;
            int cnt = 0;
            for (int j = 0; j < h; ++j) {
                for (int k = w-c; k < w; ++k) {
                    cnt++;
                }
            }
            cout << cnt << endl;
            w -= c;
        }
    }
    return 0;
}