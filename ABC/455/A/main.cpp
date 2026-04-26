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
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && b == c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}