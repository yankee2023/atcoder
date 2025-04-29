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
    string s, t;
    cin >> n >> s >> t;
    int cnt = 0;
    rep(i, n) {
        if (s[i] != t[i]) cnt++;
    }

    cout << cnt << endl;
    return 0;
}