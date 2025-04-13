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
    int n;
    cin >> n;
    bool isLogin = false;
    int ans = 0;
    rep(i, n) {
        string s;
        cin >> s;
        if (s == "login") isLogin = true;
        else if (s == "logout") isLogin = false;
        else if (s == "private" && !isLogin) ans++;
    }

    cout << ans << endl;
    return 0;
}