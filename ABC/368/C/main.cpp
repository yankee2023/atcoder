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
    ll N;
    cin >> N;
    vector<ll> H(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    ll T = 0;
    bool flag = false;
    while (flag == false)
    {
        T++;
        ll target = 0;
        for (target = 0; target < N; target++)
        {
            if (H[target] > 0)
            {
                break;
            }
        }
        
        if (T % 3 == 0)
        {
            H[target] -= 3;
        } else {
            H[target] -= 1;            
        }
        if (H[target] <= 0)
        {
            H.erase(H.begin());
        }

        if (H.size() == 0)
        {
            flag = true;
        }
    }
    
    cout << T;
    
    return 0;
}