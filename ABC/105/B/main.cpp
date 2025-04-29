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
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
constexpr int INF = 1 << 30;

int main()
{
    int N;
    cin >> N;

    if (N % 4 == 0 || N % 7 == 0 || N % 11 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}