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

/**
 * @brief 尺取り法
 * 
 * @return int 
 */
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<int> cnt(1000005);
    bool isMult = false;   // 複数個あるかどうか

    int ans = INF;
    int r = 0;
    rep(l,n) {
        while (r < n && isMult == false) {    // 右端まで行ってない&&2回目出てない
            cnt[a[r]]++;
            if (cnt[a[r]] == 2) isMult = true;
            r++;
        }
        if (!isMult) break;
        ans = min(ans, r-l);
        if (cnt[a[l]] == 2) isMult = false;
        cnt[a[l]]--;
    }

    if (ans == INF) ans = -1;
    cout << ans << endl;
    
    return 0;
}