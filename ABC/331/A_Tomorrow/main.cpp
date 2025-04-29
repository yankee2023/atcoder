#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, D, y, m, d;
    cin >> M >> D;
    cin >> y >> m >> d;

    /* y年m月d日が
      ・年末ならy+1年1月1日
      ・年末でない月末ならy年m+1月1日
      ・月末でなければy年1月d+1日
    */
    if (D == d && M == m) {
        m = 1;
        d = 1;
        cout << y + 1 << " " << m << " " << d << endl;
    } else if (D == d) {
        d = 1;
        cout << y << " " << m + 1 << " " << d << endl;
    } else {
        cout << y << " " << m << " " << d + 1 << endl;
    }

    return 0;
}