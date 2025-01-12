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
    
    
    ll ans = 0;
    for (int i = N-1; 0 <= i; --i)
    {
        int base = A[i] / 2;
        auto itr = upper_bound(A.begin(), A.end(), base);
        // baseより小さい個数を取得
        ans += itr - A .begin();   // 始まりを引くことで、個数を得る 
    }
    
    cout << ans << endl;
    return 0;
}