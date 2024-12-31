#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)


int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> r(n);
    rep(i, n) cin >> r[i];

    // 昇順にソート
    sort(r.begin(), r.end());

    // ソートしたrの累積和を表す
    vector<ll> s(n+1);
    rep(i, n) s[i+1] = s[i] + r[i];

    rep(qi, q) {
        ll x;
        cin >> x;
        // イテレータ範囲のうち、
        // 指定された要素より大きい値が現れる最初の位置のイテレータを取得
        int ans = upper_bound(s.begin(), s.end(), x) - s.begin();
        ans--;
        cout << ans << '\n';
    }

    return 0;
}