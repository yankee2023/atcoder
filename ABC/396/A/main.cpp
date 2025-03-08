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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    bool ans = false;
    rep(i, n-2) {
        if (a[i] == a[i+1] && a[i+1] == a[i+2]) ans = true;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}