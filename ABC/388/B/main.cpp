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
#define rep(i, n) for (int i = 0; i < (int)n; ++i);

int main()
{
    int N, D;
    cin >> N >> D;
    vector<int> T(N), L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i] >> L[i];
    }

    for (int k = 1; k <= D; k++)
    {
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            ans = max(ans, (T[i]*(L[i]+k)));
        }
        cout << ans << endl;
    }

    return 0;
}