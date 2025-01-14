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
    char ch;
    for (int i = 0; i < 19; i++)
    {
        cin >> ch;
        if (ch == ',')
        {
            cout << " ";
        }
        else
        {
            cout << ch;
        }
    }
    
    return 0;
}