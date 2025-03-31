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
    vector<set<int>> uv(n);
    rep(i, m) {
        int u, v;
        cin >> u >> v;
        uv[u].push_back(v);
        uv[v].push_back(u);
    }
    if (m == 0) {
        cout << 0 << endl;
        return 0;
    }

    int cnt = 0;
    rep(i, n) {
        if (uv[i].size() == 0) cnt++;
    }
    cout << 
    return 0;
}