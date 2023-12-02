#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    int ans = 9999999;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < L; k++) {
                if (6*i + 8*j + 12*k >= N) {
                    ans = min((i*S + j*M + k*L), ans);
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}