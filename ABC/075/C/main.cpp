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

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    vector<int> a(m), b(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i] >> b[i];
        --a[i];
        --b[i];
        graph[a[i]].push_back(b[i]);
        graph[b[i]].push_back(a[i]);
    }

    int ans = 0;
    for (int i = 0; i < m; ++i) {
        vector<bool> visited(n);
        queue<int> q;
        visited[0] = true;
        q.push(0);
        while (!q.empty()) {
            int visit = q.front();
            q.pop();
            for (auto v: graph[visit]) {
                if (visited[v] || v == a[i] || v == b[i]) continue;
                visited[v] = true;
                q.push(v);
            }
        }
        for (auto v: visited) {
            if (!v) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}