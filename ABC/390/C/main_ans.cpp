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
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H) cin >> S[i];

    int li = H, ri = 0;
    int lj = W, rj = 0;
    rep(i, H) rep(j, W) {
        if (S[i][j] == '#') {   // 黒を含む最小の長方形を求める
            li = min(li,i);
            ri = max(ri,i);
            lj = min(lj,j);
            rj = max(rj,j);
        }
    }

    for (int i = li; i <= ri; i++)
    {
        for (int j = lj; j <= rj; j++)
        {
            if (S[i][j] == '.') {   // 長方形の中に".(白)"が存在したら長方形にならない
                cout << "No" << endl;
                return 0;
            }
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}
