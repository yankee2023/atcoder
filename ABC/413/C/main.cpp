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

    queue<ll> que;
    for (int i = 0; i < q; ++i) {
        int queryNum;
        cin >> queryNum;
        if (queryNum == 1) {
            ll c, x;
            cin >> c >> x;
            rep(i, c) que.push(x);
        } else {
            ll k;
            cin >> k;
            ll ans = 0;
            rep(i, k) {
                ans += que.front();
                que.pop();
            }
            cout << ans << endl;
        }
    }
    return 0;
}