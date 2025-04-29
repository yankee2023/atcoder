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
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> A(N);
    for (int i = 1; i < L; i++)
    {
        cout << i << " ";
    }
    for (int i = R; i >= L; i--)
    {
        cout << i << " ";
    }
    for (int i = R+1; i <= N; i++)
    {
        cout << i << " ";
    }
    
    return 0;
}