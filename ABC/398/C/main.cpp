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
const int INF = 1 << 30;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    map<int, int> indexNums;
    rep(i,n) indexNums[a[i]] = i;

    map<int, int> unique;
    rep(i,n) {
        if (unique.end() == unique.find(a[i])) unique[a[i]] = 1;
        else ++unique[a[i]];
    }

    int ans = 0;
    for (auto v: unique) {
        if (v.second != 1) continue;
        ans = max(ans, v.first);
    }
    
    if (ans == 0) cout << -1 << endl;
    else cout << indexNums[ans]+1 << endl;

    return 0;
}