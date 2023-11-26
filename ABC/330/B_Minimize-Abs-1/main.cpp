#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int N, L, R, ans;
    scanf("%d %d %d", &N, &L, &R);
    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);

        if (abs(L - A[i]) < abs(R - A[i])) {
            ans = L;
        } else {
            ans = R;
        }
        
        printf("%d ", ans);
    }
    
    return 0;
}