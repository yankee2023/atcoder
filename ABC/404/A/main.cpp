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
    string s;
    cin >> s;

    vector<bool> list(26);
    rep(i,s.size()) {
            list[s[i]-97] = true;
    }

    rep(i,26) {
        if (!list[i]) {
            cout << char(97+i) << endl;
            return 0;
        }
    }
    return 0;
}