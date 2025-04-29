#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, D, y, m, d;
    cin >> M >> D;
    cin >> y >> m >> d;

    // y年m月d日が0年1月1日から数えて何日目か求める
    /* 因数分解
        (y * M * D) + (m - 1) * D + (d -1)
        = (y * M + (m - 1)) * D + (d - 1)
    */
    int total_days = (y * M + (m -1)) * D + (d -1);
    // 翌日
    total_days += 1;

    int ans_y, ans_m, ans_d;
    ans_y = total_days / (M * D);
    ans_m = ((total_days / D) % M) + 1;
    ans_d = (total_days % D) + 1;

    cout << ans_y << " " << ans_m  << " " << ans_d << endl;

    return 0;
}