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
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    int ans = 0;
    for (int i = 1; i < n-1; i++)
    {
        if (p[i-1] < p[i] && p[i] < p[i+1]) ans++;
        else if (p[i+1] < p[i] && p[i] < p[i-1]) ans++;
    }

    cout << ans << endl;

    return 0;
}