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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    int s = 0;  // 成人の人数
    vector<int> r(N);
    rep(i, N) {
        A[i] += s;
        s++;
        int kubaru_ishi = min(A[i], N-i-1);
        A[i] -= kubaru_ishi;
        r[i+kubaru_ishi]++;
        s -= r[i];
    }
    
    rep(i, N) cout << A[i] << " ";
    cout << endl;
    return 0;
}