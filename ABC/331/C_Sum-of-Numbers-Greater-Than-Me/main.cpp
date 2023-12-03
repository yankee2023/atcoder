#include <bits/stdc++.h>
using namespace std;

/*
    愚直にforループ回すとTLE
*/
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans = 0;
        for (int j = 0; j < N; j++) {
            if (A[i] < A[j]) {
                ans += A[j];
            }
        }
        cout << ans << " ";
    }
    
    return 0;
}