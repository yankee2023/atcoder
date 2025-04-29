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
    string s;
    cin >> s;

    int ans = 0;
    rep(i, s.size()) {
        if ('A' == s[i]) {
            int length = 0;
            for (int j = i+1; j < s.size(); ++j) {
                if ('B' == s[j]) {
                    length = j - i;
                    if (length+j < s.size() && 'C' == s[length+j]) ++ans;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}