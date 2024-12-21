#include <bits/stdc++.h>
using namespace std;

/*
    Aが降順の場合、各iの昇順に効率良く求めることができる。
    A が降順でないときも、降順になるようなindexの順でしょりする。
    ソートにO(NlogN)時間かかるので、計算量O(NlogN)となる
*/
int32_t main() {
    int32_t N;
    cin >> N;
    vector<int32_t> A(N);
    for (int32_t i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 値とindexの組
    map<int32_t, vector<int32_t>> d;
    // 
    for (int32_t i = 0; i < N; i++) {
        d[A[i]].push_back(i);
    }

    // 合計値を求める
    int64_t sum = accumulate(A.begin(), A.end(), 0LL);

    vector<int64_t> ans(N);
    for (auto [v, i_list]:d) {
        sum -= (int64_t)v*i_list.size();
        for (auto i:i_list) {
            ans[i] = sum;
        }
    }
    
    for (auto x:ans) {
        cout << x << " ";
    }

    return 0;
}