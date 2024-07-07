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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &nx : a){cin >> nx;}
    sort(a.begin(),a.end());
    int res=2e9;
    for(int i=0;i<=k;i++){
        res=min(res,a[i+(n-k)-1]-a[i]);
    }
    cout << res << "\n";
    return 0;
}