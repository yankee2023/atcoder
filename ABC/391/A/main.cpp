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
    string D;
    cin >> D;

    if (D == "N") {
        cout << "S" << endl;
    } else if (D == "E") {
        cout << "W" << endl;
    } else if (D == "W") {
        cout << "E" << endl;
    } else if (D == "S") {
        cout << "N" << endl;
    } else if (D == "NE") {
        cout << "SW" << endl;
    } else if (D == "NW") {
        cout << "SE" << endl;
    } else if (D == "SE") {
        cout << "NW" << endl;
    } else if (D == "SW") {
        cout << "NE" << endl;
    } 

    return 0;
}