#include <iostream>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = 1 << 30;

int main()
{
    int q;
    cin >> q;

    queue<pair<int, int>> que;
    for (int i = 0; i < q; ++i) {
        int queryNum;
        cin >> queryNum;
        if (queryNum == 1) {
            int c, x;
            cin >> c >> x;
            que.emplace(x, c);
        } else {
            int k;
            cin >> k;
            ll ans = 0;
            while (0 < k) {
                auto [x, c] = que.front();
                if (c <= k) {
                    ans += (ll)x*c;
                    k -= c;
                    que.pop();
                } else {
                    ans += (ll)x*k;
                    que.front().second -= k;
                    k = 0;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}