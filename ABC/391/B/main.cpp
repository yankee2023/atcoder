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

int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> S(N), T(M);
    rep(i, N) cin >> S[i];
    rep(i, M) cin >> T[i];

    rep(a, N-M+1)rep(b, N-M+1)
    {
        bool ok = true;
        rep(i, M)rep(j, M)
        {
            if (S[a+i][b+j] != T[i][j]) ok = false;
        }
        if (ok)
        {
            cout << a+1 << ' ' << b+1 << endl;
        }
    }

    return 0;
}