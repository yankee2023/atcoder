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

    bool flag = false;
    for (int i = 1; i <= 9; i++)
    {
        if (N % i == 0 && N / i <= 9)
        {
            flag = true;
            break;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
