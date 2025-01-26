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
    vector<int> A(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (A[i] > A[i+1]) 
        {
            count++;
            if (A[i] - A[i+1] >= 2) count++;    // {3 1 2 4 5}を考慮
        }
    }
    
    if (count == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}