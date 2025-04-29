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
    string s;
    cin >> s;

    int n = s.size();
    vector<int> ans(n, 1);
    int count = 1;
    for (int i = 0; i < n;) {
        int j = i + 1;
        while (s[i] == s[j] && ans[j] != 0) {
            ++j;
        }

        if (count % 2 == 1) {   // Rの処理
            for (int a = j-1; i <= a; --a) {
                ans[a+1] += ans[a];
                ans[a] = 0;
            }
        } else {    // Lの処理
            for (int a = i; a < j; ++a) {
                ans[a-1] += ans[a];
                ans[a] = 0;
            }
        }
        ++count;
        i = j;
    }

    rep(i,n) cout << ans[i] << " ";
    return 0;
}