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
    int N, K;
    cin >> N >> K;
    int sum = 0, ans = 0;

    for (int i = 1; i <= N; ++i) {
        int temp = i;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == K) {
            ans++;
        }
        sum = 0;
    }

    cout << ans << endl;
    return 0;
}