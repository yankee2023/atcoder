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
    int n, k;
    cin >> n >> k;
    vector<int> a_bucket(n+1);
    rep(i, n) {
        int a;
        cin >> a;
        a_bucket[a] += 1;
    }

    // 1種類以上の箇所を取り出す
    vector<int> vec;
    rep(i, n+1) {
        if (a_bucket[i] != 0) vec.push_back(a_bucket[i]);
    }

    int kind = vec.size();
    // 昇順にソート
    sort(vec.begin(), vec.end());
    if (kind <= k) cout << 0 << endl;
    else {
        int query = 0;
        rep(i, n+1) {
            // 初めて0でない箇所を探す
            if (vec[i] != 0) {
                // 種類を減らすには該当箇所の個数を0にする必要がある
                query += vec[i];
                vec[i] = 0;
                --kind;
            }
            if (kind <= k) break;
        }
        cout << query << endl;
    }
    return 0;
}