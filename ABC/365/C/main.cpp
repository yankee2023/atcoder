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
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int fareSum=0, ans=0;
    for (int i = 0; i < N; i++)
    {
        fareSum += A[i];
    }
    if (fareSum <= M)
    {
        cout << "infinite";
        return 0;
    }

    for (int i = 1; i < M; i++)
    {
        fareSum = 0;
        for (int j = 0; j < N; j++)
        {
            fareSum += min(A[j], i);
            if (fareSum > M)
            {
                cout << ans;
                return 0;
            }
        }
        ans = i;
    }

    cout << ans;
    return 0;
}