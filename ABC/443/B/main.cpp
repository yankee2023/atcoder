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
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = 1 << 30;

int main()
{
    int N, K;
    cin >> N >> K;

    int ans = 0;
    while (0 < K ) {
        K -= N;
        if (K <= 0) break;
        ans++;
        N++;
    }

    cout << ans << endl;
    return 0;
}