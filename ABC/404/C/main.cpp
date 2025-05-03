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
    vector<vector<int>> graph(m);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    rep(i,m) {
        if (2 == graph[i].size()) continue;
        cout << "No" << endl;
        return 0;
    }


    return 0;
}