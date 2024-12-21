/**
 * @brief https://atcoder.jp/contests/abc335/editorial/9026
 * @details 配列で情報を持つ。クエリを処理するために必要な操作は以下。
 * 1. 末尾の要素を削除
 * 2. 先頭に要素を追加
 * 3. p番目要素を答える
 * 配列に対して直接操作を行うとTLEとなる。
 * 添字アクセスが高速な言語では"deque"を使用。
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    deque<pair<int, int>> d;
    for (int i = 1; i <= N; i++) d.push_back({i, 0});
    
    while(Q--) {
        int query;
        cin >> query;
        if (query == 1) {
            char c;
            cin >> c;
            
            auto[x, y] = d[0];
            // 先頭に移動後の要素を追加
            if (c == 'R') d.push_front({x + 1, y});
            if (c == 'L') d.push_front({x - 1, y});
            if (c == 'U') d.push_front({x,     y + 1});
			if (c == 'D') d.push_front({x,     y - 1});
            // 末尾の要素を削除
            d.pop_back();
        } else {
            int x;
            cin >> x;

            x--;
            cout << d[x].first << ' ' << d[x].second << endl;
        }
    }

    return 0;
}