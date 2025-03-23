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
    vector<int> ans(n);
    rep(ri, 2) {
        {   // solve R
            int cnt = 0;
            rep(i, n) {
                if (s[i] == 'R') cnt++;
                else {
                    ans[i] += cnt/2;
                    ans[i-1] += (cnt+1)/2;
                    cnt = 0;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        reverse(s.begin(), s.end());
        rep(i, n) {
            if (s[i] == 'L') s[i] = 'R';
            else s[i] = 'L';
        }
    }

    rep(i,n) cout << ans[i] << " ";
    return 0;
}