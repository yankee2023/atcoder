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
    int N, K;
    cin >> N >> K;
    vector<ll> h(N);
    rep(i, N) cin >> h[i];

    sort(h.begin(), h.end());
    int ans = INF;
    for (int i = 0; i < N-K+1; i++)
    {
        int tmp = 0;
        for (int j = 0; j < K-1; j++)
        {
            tmp += (int)(h[i+j+1]-h[i+j]);
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}