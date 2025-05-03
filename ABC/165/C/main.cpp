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

int N, M, Q;
vector<ll> a, b, c, d;

/**
 * @brief 数列Aのスコアを計算する 
 * @param A 数列
 * @return ll スコア
 */
ll calcScore(vector<int>& A)
{
    ll score = 0;
    rep(q, Q) {
        if (A[b[q]] - A[a[q]] == c[q]) score += d[q];
    }
    return score;
}

/**
 * @brief 数列Aを全列挙してスコアの最大値を求める再帰関数
 * @param A 数列
 * @return ll スコアの最大値
 */
ll recursive(vector<int>& A)
{
    // 再起関数の終了条件
    if (A.size() == N) return calcScore(A);

    ll result = 0;
    int prev_last = (A.empty() ? 1 : A.back());
    for (int add = prev_last; add <= M; ++add) {
        A.push_back(add);
        result = max(result, recursive(A));
        A.pop_back();
    }
    return result;
}

/**
 * @brief ABC167 C
 * @return int 
 */
int main()
{
    cin >> N >> M >> Q;
    a.resize(Q);
    b.resize(Q);
    c.resize(Q);
    d.resize(Q);
    rep(q, Q) {
        cin >> a[q] >> b[q] >> c[q] >> d[q];
        --a[q], --b[q];
    }

    vector<int> A;

    cout << recursive(A) << endl;
    return 0;
}