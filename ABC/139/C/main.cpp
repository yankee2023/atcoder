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

/*
 * 最大移動可能マスの次から探索する
 */
int main()
{
    int n;
    cin >> n;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];

    int ans = 0;
    for (int i = 0; i < h.size();) {
        int j = i;
        while (j+1 < h.size() && h[j] >= h[j+1]) {
            ++j;
        }

        ans = max(ans, j-i);
        i = j+1;
    }

    cout << ans << endl;
    return 0;
}