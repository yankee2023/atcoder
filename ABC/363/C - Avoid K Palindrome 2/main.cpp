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
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    
    vector<int> a;
    for (int i = 0; i < N; i++)
    {
        a.push_back(((int)(S[i]-'a')));
    }
    sort(a.begin(), a.end());
    int ans = 0;
    bool ok, flag;
    do
    {
        ok = true;
        for (int i = 0; i <= N-K; i++)
        {
            flag = true;
            for (int j = 0; j < K; j++)
            {
                if (a[i+j] != a[i+K-1-j])
                {
                    flag = false;
                }
                if (flag)
                {
                    ok = false;
                }
            }
        }
        if (ok)
        {
            ans++;
        }
        
    } while (next_permutation(a.begin(), a.end()));
    
    cout << ans;

    return 0;
}