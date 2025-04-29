#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = pow(10, 9);

int main()
{
    ll n, m;
    cin >> n >> m;
    ll x = 0;
    rep(i, m+1) {
        x += pow(n,i);
        if (INF < x) {
            cout << "inf" << endl;
            return 0;
        }
    }
    
    cout << x << endl;
    return 0;
}