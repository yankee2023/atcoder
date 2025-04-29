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
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    int ans = 0;
    for (int l = 0; l < n;) {
        int r = l;
        while (r < n && h[r] !=0) ++r;
        bool isExecuted = false;
        for (int i = l; i < r; ++i) {
            --h[i];
            isExecuted = true;
        }

        if (h[l] == 0) ++l;
        if (isExecuted) ++ans;
    }

    cout << ans << endl;
    return 0;
}