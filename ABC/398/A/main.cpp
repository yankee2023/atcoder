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
    if (n % 2 == 0) {
        rep(i,n) {
            if (i == n/2 || i == (n/2)-1) cout << '=';
            else cout << '-';
        }
    } else {
        rep(i,n) {
            if (i == n/2) cout << '=';
            else cout << '-';
        }
    }

    cout << endl;
    return 0;
}