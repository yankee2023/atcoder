#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N], P[N-1];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N-1; i++) {
        cin >> P[i];
    }

    for (int i = 0; i < 1e+100; i++) {
        for (int j = 0; j < N-1; j++) {
            A[P[j]] = A[P[j]] + A[j];
        }
    }
    
    if (A[0] > 0 ) {
        cout << "+" << endl;
    } else if (A[0] == 0) {
        cout << 0 << endl;
    } else {
        cout << "-" << endl;
    }

    return 0;
}