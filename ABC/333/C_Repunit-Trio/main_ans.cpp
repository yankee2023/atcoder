/**
 * @brief https://atcoder.jp/contests/abc333/editorial/7979
 * @details 条件を満たす数は1が0個以上、2が0個以上、3が1個以上並んでいるとき
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 1桁目から12桁目までの探索
    for (int digit = 1; digit < 13; digit++) {
        for (int a = digit - 1; a >= 0; a--) {
            for (int b = digit - a - 1; b >= 0; b--) {
                int c = digit - a - b;
                N--;
                if (N == 0) {
                    cout << string(a, '1') + string(b, '2') + string(c, '3') << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}