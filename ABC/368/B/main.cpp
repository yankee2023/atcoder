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
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int flag = false, ans = 0;
    while (flag == false)
    {
        sort(A.rbegin(), A.rend());
        A[0] -= 1;
        A[1] -= 1;
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] <= 0)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        
        if (count <= 1)
        {
            flag = true;
        }
        ans++;
    }
    
    cout << ans;
    
    return 0;
}