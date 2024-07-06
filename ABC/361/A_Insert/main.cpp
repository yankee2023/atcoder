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

int main()
{
    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    auto itr = A.begin();
    for (int i = 0; i < K; i++)
    {
        itr++;
    }
    A.insert(itr, X);
    
    for (int  i = 0; i < N+1; i++)
    {
        cout << A[i] << " ";    
    }

    return 0;
}