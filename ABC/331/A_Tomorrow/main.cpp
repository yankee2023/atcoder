#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, D, y, m, d;
    cin >> M >> D;
    cin >> y >> m >> d;

    // tomorrow
    d++;

    int over_d = 0, over_m = 0;
    if (D == 1 && M == 1) {
        m += (d-1);
        d = 1;
        y += (m-1);
        m = 1;
    } else if (D == 1) {
        m += (d-1);
        d = 1;
        over_m = m / M;
        m = m % M;
        y += over_m;
    } else if (M == 1) {
        over_d = d / D;
        d = d % D;
        m += over_d;
        y += (m-1);
        m = 1;
    } else {
        over_d = d / D;
        d = d % D;
        m += over_d;
        
        over_m = m / M;
        m = m % M;
        y += over_m;
    }

    cout << y << " " << m << " " << d << endl;
    return 0;
}