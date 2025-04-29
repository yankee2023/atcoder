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
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    
    
    int base_index = N-2, ans = 0;
    for (int i = N-1; 0 <= i; --i)
    {
        int base = A[i] / 2;
        for (int j = base_index; 0 <= j; --j)
        {
            if (A[j] <= base)
            {   // 一番大きい満たす値を見つけたら、以降は必ず満たすため確認しない
                ans += j+1;
                break;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}