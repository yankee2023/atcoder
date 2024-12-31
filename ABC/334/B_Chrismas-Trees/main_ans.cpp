#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t A, M, L, R;
    cin >> A >> M >> L >> R;

    /** @note 考え方
     *  L <= A + kM <= R
     *  ⇔ (L - A) / M <= k <= (R - A) / M
     *  ⇔ ⌈(L - A) / M⌉ <= k <= ⌊(R - A) / M⌋
     *  実数xに対し⌊x⌋はx以下で最大の整数を、
     *  ⌈x⌉はx以上で最小の整数を意味。
     *  求めるkの個数は以下の式で求まる。
     *  ⌊(R - A) / M⌋ - ⌈(L - A) / M⌉ + 1 
    */

   // 基準の木までの距離を木の間隔で割った余り
    int64_t l_point = L + ((A - L) % M + M) % M;
    int64_t r_point = R - ((R - A) % M + M) % M;

    // 両端の距離を間隔で割って1を足す
    cout << ((r_point - l_point) / M) + 1 << endl;
}