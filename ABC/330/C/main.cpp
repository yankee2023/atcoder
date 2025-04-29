#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t D;
    cin >> D;
    int64_t ans = 1e18;

    for (int64_t x = 0; ; x++) {
        int64_t c = x * x - D;

        if (c >= 0) {
            ans = min(ans, c);
        } else {
            int64_t d = sqrtl(abs(c));
            ans = min(ans, abs(d * d + c));
            ans = min(ans, abs((d + 1) * (d + 1) + c));
        }
        
        if (x * x >= D) {
            break;
        }
    }
    
    cout << ans << endl;

    return 0;
}