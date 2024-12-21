#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;               // ソリの数とクエリの個数
    cin >> N >> Q;
    vector<int> R(N);       // ソリを引くのに必要なトナカイ
    int query[Q];
    for (int i = 0; i < N; i++) {
        cin >> R[i];
    }
    for (int i = 0; i < Q; i++) {
        cin >> query[i];
    }
    
    // 昇順にソート
    sort(R.begin(), R.end());

/*  考え方
    トナカイ全匹から、
    昇順にソートしたソリを引くのに必要なトナカイRi匹を
    引いていけば答えになると思った。

*/
    for (int i = 0; i < Q; i++) {
        int ans = 0;
        for (int j = 0; j < N; j++) {
            if (query[i] >= R[j]) {
                query[i] -= R[j];
                ans++;
            } else if (query[i] < R[i]) {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}