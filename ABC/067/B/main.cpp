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
    vector<int> l(N);
    rep(i, N) cin >> l[i];
    sort(l.begin(), l.end());

    int ans = 0;
    for (int i = 0; i < K; i++) ans += l[N-1-i];

    cout << ans << endl;
    return 0;
}