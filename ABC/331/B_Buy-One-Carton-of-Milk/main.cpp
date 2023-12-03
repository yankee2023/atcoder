#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    int ans = INT32_MAX;
    for (int i = 0; 6*i <= N; i++) {
        for (int j = 0; 8*j <= N-6*i; j++) {
            for (int k = 0; 12*k <= (N-6*i-8*j); k++) {
                if (6*i + 8*j + 12*k >= N) {
                    ans = min((i*S + j*M + k*L), ans);
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}