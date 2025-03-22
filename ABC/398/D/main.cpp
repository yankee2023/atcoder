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
    int n, r, c;
    string s;
    cin >> n >> r >> c >> s;

    int x = 0, y = 0;
    rep (i, n) {
        if (s[i] == 'N') {
            x--;
            if (x == r && y == c) cout << 1;
            else cout << 0;
        } else if (s[i] == 'W') {
            y--;
            if (x == r && y == c) cout << 1;
            else cout << 0;
        } else if (s[i] == 'S') {
            x++;
            if (x == r && y == c) cout << 1;
            else cout << 0;
        } else {
            y++;
            if (x == r && y == c) cout << 1;
            else cout << 0;
        }
    }

    return 0;
}