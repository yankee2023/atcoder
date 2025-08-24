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
    string m, d;
    cin >> m >> d;

    for (int i = 1; i <= 9; ++i) {
        int flag = m.length()+d.length();
        for (int j = 0; j < m.length(); ++j) {
            if (m[j] == '0'+i) --flag;
        }

        for (int k = 0; k < d.length(); ++k) {
            if (d[k] == '0'+i) --flag;
        }

        if (flag == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
