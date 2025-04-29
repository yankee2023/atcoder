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
    int n, m;
    cin >> n >> m;
    vector<int> viewpoints(n);
    rep(i,n) cin >> viewpoints[i];
    vector<set<int>> loads(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        loads[a].insert(b);
        loads[b].insert(a);
    }

    int ans = 0;
    rep(i,n) {
        int height = viewpoints[i];
        bool isGood = true;
        for (auto load : loads[i]) {
            if (height <= viewpoints[load]) {
                isGood = false;
                break;
            }
        }
        if (isGood) ans++;
    }

    cout << ans << endl;
    return 0;
}