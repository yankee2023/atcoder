#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S, K;
    cin >> N >> S >> K;
    int P[N], Q[N];
    for (int i = 0; i < N; i++) {
        cin >> P[i] >> Q[i];
    }
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += P[i] * Q[i]; 
    }
    if (ans < S) {
        ans += K;
    }

    cout << ans << endl;

    return 0;
}