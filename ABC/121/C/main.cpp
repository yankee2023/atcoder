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
    int N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> ab;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        ab.push_back(make_pair(a, b));
    }

    ll ans = 0;
    sort(ab.begin(), ab.end());
    for (int i = 0; i < N; i++)
    {
        if (ab[i].second > M) {
            ans += ab[i].first * M;
            break;
        } else {
            ans += ab[i].second * ab[i].first;
            M -= ab[i].second;
        }
    }
    
    cout << ans << endl;
    return 0;
}