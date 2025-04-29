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
    int N;
    cin >> N;
    vector<int> d(N);
    rep(i, N) cin >> d[i];

    sort(d.begin(), d.end());
    int ans = d[N/2] - d[N/2-1];
    if (ans < 0) ans = 0;

    cout << ans << endl;

    return 0;
}