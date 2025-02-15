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
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == "fine" && s2 == "fine") cout << 4;
    else if (s1 == "fine" && s2 == "sick") cout << 3;
    else if (s1 == "sick" && s2 == "fine") cout << 2;
    else cout << 1;
    return 0;
}