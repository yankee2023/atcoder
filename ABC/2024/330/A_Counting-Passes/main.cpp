#include <iostream>
using namespace std;

int main() {
    int N, L, ans = 0;
    cin >> N >> L;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (L <= A[i]) {
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}