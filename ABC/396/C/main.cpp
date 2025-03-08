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
    vector<int> b(n), w(m);
    rep(i,n) cin >> b[i];
    rep(i,m) cin >> w[i];
    
    sort(b.begin(), b.end());
    sort(w.begin(), w.end());

    auto bItr = upper_bound(b.begin(), b.end(), 0);
    auto wItr = upper_bound(w.begin(), w.end(), 0);
    ll bIndex = bItr - b.begin();
    ll wIndex = wItr - w.begin();
    ll bNum = b.end() - bItr;
    ll wNum = w.end() - wItr;
    int ans = 0;
    if (bNum == 0) {
        cout << ans << endl;
        return 0;
    }

    if (wNum > bNum) {
        if (bNum < m) wIndex = w.size()-bNum;
        else wIndex = m;

        while (b[bIndex]+w[wIndex] < 0)
        {
            --bIndex;
            --wIndex;
        }
    }
    for (int i = bIndex; i < n; ++i) {
        ans += b[i];
    }
    for (int i = wIndex; i < m; ++i) {
        ans += w[i];
    }

    cout << ans << endl;

    return 0;
}