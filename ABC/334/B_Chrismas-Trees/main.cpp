#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t A, M, L, R;
    cin >> A >> M >> L >> R;

    if (L == R) {
        cout << 0 << endl;
        return 0;
    }

/*  考え方
    L <= (A + k * M ) <= R
    (L - A) / M <= k <= (R - A) / M
    この間にあるkの個数を求めればいいはず。
    基準を0において「0 <= k <= ???」の形にすれば、
    for文を使わずに求められるはず。
*/
    int64_t lk = (L - A) / M;
    int64_t rk = (R - A) / M;

    if (lk < 0) {
        rk += (-1) * lk;
        lk = 0;
        cout << rk + 1<< endl;
    } else if (lk > 0) {
        rk += (-1) * lk;
        lk = 0;
        cout << rk << endl;
    } else if (lk == 0) {
        cout << rk + 1 << endl;
    }
    

    return 0;
}