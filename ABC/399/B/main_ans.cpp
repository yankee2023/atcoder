#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

/// <summary>
/// 自分より高い順位の人+1が自分の順位
/// </summary>
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    // 最初に+1しておく
    vector<int> ans(n, 1);
    rep(i, n) {
        rep(j, n) {
            if (p[i] < p[j]) ans[i]++;
        }
        cout << ans[i] << endl;
    }
}

int main() {

    solve();
    
    return 0;
}