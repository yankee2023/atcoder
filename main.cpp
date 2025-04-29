#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
constexpr int INF = 1 << 30;

int main()
{
    int h, w, y, x;
    cin >> h >> w >> y >> x;
    vector<string> meiro(h);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) cin >> meiro[i][j];
    }

    while (y < h) {
        if (meiro[y][x-1])
    }
    // for (int i = 0; i < h; ++i) {
    //     for (int j = 0; j < w; ++j) {

    //     }
    // }

    return 0;
}