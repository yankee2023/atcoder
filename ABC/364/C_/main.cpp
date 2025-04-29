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
    int N, X, Y;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    int sweet=0, salty=0, ans_A=0, ans_B=0;
    // for (int i = 0; i < N; i++)
    // {
    //     ans_A++;
    //     iterator itr = min_element(A.begin(), A.end());
    //     sweet += A(itr);
    //     salty += B(itr);
    //     A.erase(itr);
    //     if (sweet > X)
    //     {
    //         break;
    //     }
    // }
    for (int i = 0; i < N; i++)
    {
        ans_B++;
        int min = *min_element(B.begin(), B.end());
        sweet += min;
        salty += min;
        remove(B, min)
        if (salty > Y)
        {
            break;
        }
    }
    
    return 0;
}