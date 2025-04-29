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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i < n; ++i) cin >> a[i];

    int alice = 0, bob = 0;
    sort(a.rbegin(), a.rend()); // 降順にソート
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) alice += a[i];
        else bob += a[i];        
    }
    
    cout << alice - bob << endl;

    return 0;
}