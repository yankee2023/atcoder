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
    int N, ans = 0;
    cin >> N;
    vector<int> A(2*N);
    for (int i = 0; i < 2*N; i++)
    {
        cin >> A[i];
        if (2 <= i)
        {
            if (A[i-2] == A[i])
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
        
    return 0;
}