#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    /*
        卵の個数が100なので全探索してもTLEにはならない
        最大計算量は10^6
    */
    int ans = INT32_MAX;
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 100; k++) {
                if (6*i + 8*j + 12*k >= N) {
                    ans = min((i*S + j*M + k*L), ans);
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}