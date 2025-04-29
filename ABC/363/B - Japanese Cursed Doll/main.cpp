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
    int N, T, P, count=0, ans=0;
    cin >> N >> T >> P;
    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
        if (L[i] >= T)
        {
            count++;
        }
    }
    if (count >= P)
    {
        cout << ans;
        return 0;
    }
    
    sort(L.begin(), L.end());
    ans = T - L[N-P];
    cout << ans;
    
    return 0;
}