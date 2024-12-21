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

// DP法
// dp[i][j]=i回目までやって直前に出した手がj
// 最大勝利数を求める

int main()
{
    int N;
    string S;
    cin >> N >> S;

    const int INF = 1001001001;
    vector<vector<int>> dp(N+1, vector<int>(3, -INF));
    for (int i = 0; i < 3; i++) dp[0][i] = 0;

    for (int i = 1; i <= N; i++)
    {
        int x = 0;
        if (S[i-1] == 'R') x = 0;
        if (S[i-1] == 'P') x = 1;
        if (S[i-1] == 'S') x = 2;
        
        for (int j = 0; j < 3; j++)
        {
            int val = 0;
            if (j == (x+1)%3) val = 1;
            if (j == (x+2)%3) continue;
            for (int pj = 0; pj < 3; pj++) {
                if ((j == pj)) continue;
                dp[i][j] = max(dp[i][j], dp[i-1][pj]+val);   
            }
        }
    }
    
    int ans = max({dp[N][0], dp[N][1], dp[N][2]});
    cout << ans << endl;
    
    return 0;
}