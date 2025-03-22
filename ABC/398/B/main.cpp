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

/**
 * @brief 2枚以上、3枚以上あるかの判別
 * 
 * @return int 
 */
int main()
{
    vector<int> a(14);

    rep(i,7) {
        int b;
        cin >> b;
        ++a[b];
    }

    bool isThree = false, isTwo = false;
    rep(i,a.size()) {
        if (!isThree && 3 <= a[i]) isThree = true;
        else if (!isTwo && 2 <= a[i]) isTwo = true;
    }

    if (isThree && isTwo) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}