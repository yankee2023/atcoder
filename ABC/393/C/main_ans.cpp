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

int main() {
    int N, M;
    cin >> N >> M;
    int ans = 0;
    map<pair<int, int>, int> m;
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        // 同じ頂点は問答無用で取り除く
        if (u == v) {
            ans++;
            continue;
        }
        if (u > v) swap(u, v);
        m[{u, v}]++;
    }
    for (auto& [edge, k] : m) ans += k - 1;
    cout << ans << endl;
}
