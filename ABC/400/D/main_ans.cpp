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

// 上、左、下、右
int di[] = {-1, 0, 1, 0};
int dj[] = {0, -1, 0, 1};

/**
 * @brief 01 BFSでの解法
 */
void solve() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    --a; --b;
    --c; --d;

    vector<vector<int>> dist(h, vector<int>(w, INF));   // 移動コストの配列
    vector<vector<bool>> used(h, vector<bool>(w));      // 訪問済みかを格納する配列
    deque<pair<int, int>> q;    // 先頭と末尾への挿入・削除が可能なQueue

    
    auto push = [&](int i, int j, int d, int cost) {
        if (dist[i][j] <= d) return;
        dist[i][j] = d;
        // 移動コストが0は先頭に、
        // 移動コストが1は末尾へ追加する
        if (cost == 0) q.emplace_front(i, j);
        else q.emplace_back(i, j);
    };
    push(a, b, 0, 0);

    while (q.size()) {
        auto [i, j] = q.front();
        q.pop_front();
        if (used[i][j]) continue;
        used[i][j] = true;

        int d = dist[i][j];
        rep(v, 4) {
            int ni = i+di[v], nj = j+dj[v];
            if (ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
            if (s[ni][nj] == '.') push(ni, nj, d, 0);
        }

        rep(v, 4) {
            int ni = i, nj = j;
            rep(k, 2) {
                ni += di[v];
                nj += dj[v];
                if (ni < 0 || nj < 0 || ni >= h || nj >= w) break;
                push(ni, nj, d+1, 1);
            }
        }
    }

    cout << dist[c][d] << endl;
}

int main()
{
    solve();

    return 0;
}