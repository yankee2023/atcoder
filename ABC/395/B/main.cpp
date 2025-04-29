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
    int n;
    cin >> n;
    vector<string> s(n, string(n, '#'));    // '#'で初期化

    for (int i = 0; i < n; ++i) {
        int j = n + 1 - (i+1);
        if (i > j) continue;
        if ((i+1) % 2 != 0) {
            for (int a = i; a < j; ++a) {
                for (int b = i; b < j; ++b) s[a][b] = '#';
            }
            
        } else {
            for (int a = i; a < j; ++a) {
                for (int b = i; b < j; ++b) s[a][b] = '.';
            }
        }
    }

    rep(i, n) cout << s[i] << endl;
    return 0;
}