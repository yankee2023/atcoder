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

/**
 * @brief 同じ数字が2回出るまで探索
 * 2回目が出現した時点が最短となる
 * @note ↓だと「123132」の最短は「313」が考慮できていない
 * 
 * @return int 
 */
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> llMap;      // 頻度マップ
    vector<ll> c;           // 複数回出現した数字リスト
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        if (llMap.find(a[i]) == llMap.end()) llMap.insert(pair(a[i], 1));
        else {
            llMap[a[i]] = 2;
            c.push_back(a[i]);
        }
    }

    // 複数回出現数字がなければreturn
    if (c.size() == 0) {
        cout << -1 << endl;
        return 0;
    }

    for (ll i = 0; i < n; ++i) {
        // 先頭から数字の出現時にデクリメント
        --llMap[a[i]];
        if (llMap[a[i]] == 0) {
            for (size_t j = 0; j < c.size(); ++j) {
                // 頻度マップが0になり、
                // 複数回出現したリストに載っていたら最短連続部分列
                if (a[i] == c[j]) {
                    cout << i+1 << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}