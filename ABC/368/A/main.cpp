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

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = N-K; i < N; i++)
    {
        cout << A[i] << " ";
    }
    for (int i = 0; i < N-K; i++)
    {
        cout << A[i] << " ";
    }
    
    return 0;
}