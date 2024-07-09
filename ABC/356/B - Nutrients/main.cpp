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
    int N, M, Y;
    cin >> N >> M;
    vector<int> A(M), X(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> Y;
            X[j] += Y;
        }
    }

    for (int i = 0; i < M; i++)
    {
        if (A[i] > X[i])
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    
    return 0;
}