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
    int A, B;
    cin >> A >> B;

    int ans = max(A+B, A-B);
    ans = max(ans, A*B);

    cout << ans << endl;
    return 0;
}