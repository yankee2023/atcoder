#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
using ll = long long;

vector<vector<int>> dfs(vector<string>&s, int h, int w)
{
    queue<pair<int, int>> que;
    vector<vector<int>> dist(h, vector<int>(w, -1));
    dist[0][0] = 0;
    que.push({0, 0});
    while (!que.empty()) {
        pair<int, int> p = que.front();
        que.pop();
        int x = p.first, y = p.second;
        if (x - 1 >= 0 && s[x - 1][y] == '.') { // 上
            if (dist[x-1][y] == -1) {
                dist[x-1][y] = dist[x][y] + 1;
                que.push({x-1, y});
            }
        }
        if (x+1 < h && s[x+1][y] == '.') { // 下
            if (dist[x+1][y] == -1) {
                dist[x+1][y] = dist[x][y] + 1;
                que.push({x+1, y});
            }
        }
        if (y-1 >= 0 && s[x][y-1] == '.') { // 左
            if (dist[x][y-1] == -1) {
                dist[x][y-1] = dist[x][y] + 1;
                que.push({x, y-1});
            }
        }
        if (y+1 < w && s[x][y+1] == '.') { // 右
            if (dist[x][y+1] == -1) {
                dist[x][y+1] = dist[x][y] + 1;
                que.push({x, y+1});
            }
        }
    }

    return dist;
}

// ABC88 D
// '#'に囲われている"."の考慮ができていない
int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector<vector<int>> dist = dfs(s, h, w);
    int ans = -1;
    if (dist[h-1][w-1] == ans) {
        cout << ans << endl;
        return 0;
    } else {
        vector<bool> visited(h*w, false);
        ans = 0;
        rep(i, h) rep(j, w) {
            if (dist[i][j] == -1) continue;
            else {
                if (!visited[dist[i][j]]) { // 訪問済みとする
                    visited[dist[i][j]] = true;
                    s[i][j] = '#';
                } else {    // 訪問済みなら黒にできる
                    s[i][j] = '#';
                    ans++;
                }
            }
        }
        cout << endl;
        rep(i, h) rep(j, w) {
            cout << dist[i][j];
            if (j == w-1) cout << endl;
        }
    }

    // '#'に囲まれた.のカウント
    rep(i, h) rep(j, w) {
        if (s[i][j] == '.') ans++;
    }

    cout << ans << endl;
    return 0;
}