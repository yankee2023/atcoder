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
    vector<vector<int>> graph(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        graph[a].push_back(b);
    }

    int ans = 0;
    rep(i,n) {
        queue<int> que;
        vector<bool> visited(n);
        que.push(i);
        visited[i] = true;
        while (!que.empty()) {
            int s = que.front();
            que.pop();
            ans++;
            for (auto v: graph[s]) {
                if (visited[v]) continue;
                que.push(v);
                visited[v] = true;
            }
        }
    }

    cout << ans << endl;
    return 0;
}