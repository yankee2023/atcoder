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
    vector<string> s(n), t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];

    int ans = INF;
    vector<string> sCopy = s;
    // 回転無し
    int result = 0;
    rep(i,n) rep(j,n) {
        if (s[i][j] != t[i][j]) result++; 
    }
    ans = min(ans, result);

    // 90度回転
    result = 0;
    rep(i,n) rep(j,n) {
        sCopy[j][n-1-i] = s[i][j]; 
    }
    result++;
    rep(i,n) rep(j,n) {
        if (sCopy[i][j] != t[i][j]) result++; 
    }
    ans = min(ans, result);

    // 180度回転
    result = 0;
    rep(i,n) rep(j,n) {
        sCopy[n-1-i][n-1-j] = s[i][j]; 
    }
    result = 2;
    rep(i,n) rep(j,n) {
        if (sCopy[i][j] != t[i][j]) result++; 
    }
    ans = min(ans, result);

    // 270度回転
    result = 0;
    rep(i,n) rep(j,n) {
        sCopy[n-1-j][i] = s[i][j]; 
    }
    result = 3;
    rep(i,n) rep(j,n) {
        if (sCopy[i][j] != t[i][j]) result++; 
    }
    ans = min(ans, result);

    cout << ans << endl;
    return 0;
}