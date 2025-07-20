#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = 1 << 30;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int n2 = 1<<n;

    vector<bool> visited(n2);
    visited[0] = true;

    rep(t,n2) {
        if (visited[t]) {
            rep(i,n) {
                int nt = t | 1<<i;
                if (t ==nt) continue;
                if (s[nt-1] == '1') continue;
                visited[nt] = true;
            }
        }
    }

    if (visited[n2-1]) cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    int t;
    cin >> t;
    rep(i, t) solve();
    return 0;
}