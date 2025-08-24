#include <iostream>
#include <vector>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    
    ll sum = 0;
    rep(i,n) sum += min(a[i], b[i]);

    rep(i,q) {
        char cq;
        cin >> cq;
        if (cq == 'A') {
            ll x, y;
            cin >> x >> y;
            sum -= min(a[x-1], b[x-1]);
            a[x-1] = y;
            sum += min(a[x-1], b[x-1]);
        } else if (cq == 'B') {
            ll x, y;
            cin >> x >> y;
            sum -= min(a[x-1], b[x-1]);
            b[x-1] = y;
            sum += min(a[x-1], b[x-1]);
        }
        cout << sum << endl;
    }
    return 0;
}