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
    int n, k;
    cin >> n >> k;
    vector<ll> values(n);
    ll remaining_sum = 0;
    for (auto &value : values) {
        cin >> value;
        remaining_sum += value;
    }

    sort(values.rbegin(), values.rend());
    vector<ll> group_sums; // 各値について「値 × 出現回数」を保持
    for (int left = 0; left < n;) {
        int right = left;
        // [left, right) が同じ値の連続区間になるまで right を進める
        while (right < n && values[right] == values[left]) ++right;

        ll frequency = right - left;
        group_sums.push_back(frequency * values[left]);
        left = right;
    }

    sort(group_sums.rbegin(), group_sums.rend());
    for (auto &group_sum : group_sums) {
        if (remaining_sum < group_sum) continue;
        remaining_sum -= group_sum;
        --k;
        if (remaining_sum == 0 || k == 0) break;
    }
    cout << remaining_sum << endl;
    return 0;
}