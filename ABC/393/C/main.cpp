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
    int n, m;
    cin >> n >> m;
    map<int, int> uv;
    int side1, side2, count = 0;
    rep(i, m) {
        cin >> side1 >> side2;
        if (side1 > side2) swap(side1, side2);

        if (uv.end() == uv.find(side1)) {
            uv.insert(pair(side1, side2));
            continue;
        } else if (uv.at(side1) != side2) {
            continue;
        } else ++count;
    }

    cout << count << endl;
    return 0;
}