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
    int N;
    cin >> N;
    vector<double> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    float kohi = A[1] / A[0];
    bool flag = true;
    for (int i = 1; i < (N-1); i++)
    {
        float sa = A[i+1] / A[i];
        if (kohi != sa)
        {
            flag = false;
            break;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}