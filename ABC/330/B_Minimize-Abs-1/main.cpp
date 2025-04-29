#include <bits/stdc++.h>
using namespace std;

int N, L, R;
vector<int> A(N);

/**
 * @brief ・Aiがl以上R未満のときはAi
 * ・AiがL未満のときはL
 * ・AiがR以上のときはR
*/
static void minimize_abc() {
    for (int i = 0; i < N; i++) {
        if (L <= A[i] && A[i] < R) {
            cout << A[i] << endl;
        } else if (A[i] < L) {
            cout << L << endl;
        } else if (R <= A[i]) {
            cout << R << endl;
        }
    }
}

int main() {
    cin >> N >> L >> R;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    minimize_abc();
    
    return 0;
}