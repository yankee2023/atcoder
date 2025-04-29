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
    int N = 5;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    rep(i, N-1) 
    {   // 1つずつ入れ替えて{1,2,3,4,5}にならないか確認
        swap(A[i], A[i+1]);
        if (A == vector<int>({1,2,3,4,5}))
        {
            cout << "Yes" << endl;
            return 0;
        }
        swap(A[i], A[i+1]);     // 入れ替えたら元に戻す
    }

    cout << "No" << endl;
    
    return 0;
}