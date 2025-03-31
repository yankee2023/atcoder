#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

/// <summary>
/// 問題文そのままの解法
/// </summary>
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    // -1:未確定
    vector<int> ans(n, -1);
    int r = 1;
    while (true) {
        // ansが未確定の中で最大のpを探す
        int x = -1;
        rep(i, n) {
            if (ans[i] != -1) continue;
            x = max(x, p[i]);
        }

        // 全順位が確定していたら終了
        if (x == -1) break;

        // xの順位をrにする
        int k = 0;
        rep(i, n) {
            // 未確定かつxと同じ順位のものをrにする
            if (p[i] == x) {
                ans[i] = r;
                k++;
            }
        }

        // 探索順位rを更新
        r += k;
    }

    rep(i, n) cout << ans[i] << endl;
}

int main() {

    solve();
    
    return 0;
}