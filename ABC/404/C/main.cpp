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

/**
 * @brief 問題文から素直に解く
 */
void solve1()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // 次数が2かの判定
    rep(i,n) {
        if (2 == graph[i].size()) continue;
        cout << "No" << endl;
        return;
    }

    // 全頂点を辿って戻ってこれるかの判定
    vector<bool> visited(n, false);
    int pre = 0, now = graph[0][0];
    rep(i,n) {  // サイクルとは頂点=辺の数
        if (visited[now]) { // 探索済み頂点に再度来たら終了
            cout << "No" << endl;
            return;
        }

        visited[now] = true;
        int next = 0;
        rep(i,2) {  // 探索済み頂点でない頂点へ進む
            if (graph[now][i] != pre) next = graph[now][i];
        }
        pre = now;
        now = next;
    }

    rep(i,n) {
        if (!visited[i]) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

struct UnionFind
{
    /**
     * @brief 親の頂点番号とサイズを同時に管理する。
     * 根ではない頂点のparは親の頂点が格納している。
     * 根にはサイズ数が格納している。
     * 両者を区別するためサイズはマイナス値で入っている。
     */
    vector<int> par;

    /**
     * @brief コンストラクタ
     * -1で初期化
     * @param n 全頂点数
     */
    UnionFind(int n) : par(n, -1) { }

    int root(int x)
    {
        // 負の値の場合、根である
        if (par[x] < 0) return x;
        return par[x] = root(par[x]);
    }

    bool merge(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return false;
        if (par[rx] > par[ry]) swap(rx, ry);
        par[rx] += par[ry];
        par[ry] = rx;
        return true;
    }

    bool same(int x, int y)
    {
        return root(x) == root(y);
    }

    int size(int x)
    {
        return -par[root(x)];
    }
};

/**
 * @brief サイクルグラフの性質から解く
 * ・次数が2
 * ・連結
 */
void solve_unionFind()
{
    int n, m;
    cin >> n >> m;
    vector<int> deg(n); // 次数
    UnionFind uf(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        deg[a]++;
        deg[b]++;
        uf.merge(a, b);
    }

    // 判定
    if (deg == vector<int>(n,2) && uf.size(0) == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main()
{
    solve_unionFind();
    return 0;
}
