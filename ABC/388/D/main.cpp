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
    for (int i = 0; i < N; ++i) cin >> A[i];

    for (int i = 1; i < N; i++)
    {
        int stone = 0;
        for (int j = 0; j < i; j++)
        {
            if (1 <= A[j])
            {   // 1つ以上持ってたらあげる
                A[j] -= 1;
                ++stone;
            }
        }
        A[i] += stone;
    }
    
    for (int i = 0; i < N; i++) cout << A[i] << " ";
    
    return 0;
}