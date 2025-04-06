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
#define rep(i, start, end) for (int i = start; i < (int)end; ++i)
const int INF = 1 << 30;


int main()
{
    ll n;
    cin >> n;

    ll ans = 0;
    rep(i, 1, 60) {
        ll x = n;
        rep(j, 0, i) x /= 2;
        ll m = sqrtl(x);
        ans += (m+1)/2;
    }

    cout << ans << endl;
    return 0;
}