#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct UnionFind {
    vector<int> par;

    UnionFind(int n) : par(n, -1) {
        for (int i = 0; i < n; i++) par[i] = i;
    }
    
    /// <summary>
    /// データxが属する木の根を再帰で取得する
    /// </summary>
    /// <param name="x"></param>
    /// <returns>xの木の根</returns>
    int root(int x) {
        if (par[x] == x) return x;
        par[x] = root(par[x]);
        return par[x];
    }

    /// <summary>
    /// xとyの木を併合する
    /// </summary>
    /// <param name="x"></param>
    /// <param name="y"></param>
    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    /// <summary>
    /// xとyが同じ木に属するかを判定する
    /// </summary>
    /// <param name="x"></param>
    /// <param name="y"></param>
    /// <returns>true:同じ木に属する false:異なる木に属する</returns>
    bool isSame(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

/// <summary>
/// Union-Find
/// </summary>
static void solve()
{
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        if (uf.isSame(u, v)) {
            ans++;
            continue;
        }
        uf.unite(u, v);
    }
    cout << ans << endl;
} 

int main() {

    solve();
    
    return 0;
}