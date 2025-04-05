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
    ll n;
    cin >> n;
    
    set<int> ans;
    for (int a = 1; pow(2, a) < n; ++a) {
        int b = 1;
        ll tmp = pow(2,a) * pow(b,2);
        while (tmp <= n) {
            ans.insert(tmp);
            b += 2;
            tmp = pow(2,a) * pow(b,2);
        }
    }

    cout << ans.size() << endl;
    return 0;
}