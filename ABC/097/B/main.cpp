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

int main()
{
    int X;
    cin >> X;

    int max_num = 1;
    for (int i = 2; i <= X; ++i) {
        for (int j = 2; j <= X; ++j) {
            int now = pow(i, j);
            if (now <= X) max_num = max(max_num, now);
        }
    }

    cout << max_num << endl;
    return 0;
}