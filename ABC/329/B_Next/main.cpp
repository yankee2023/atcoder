#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max_val = A[0];
    int pre_max_val = -99999;
    int cur_val = 0;
    for (int i = 1; i < N; i++) {
        cur_val = A[i];
        if (max_val < cur_val) {
            pre_max_val = max_val;
            max_val = cur_val;
        } else if (pre_max_val < cur_val && cur_val < max_val) {
            pre_max_val = cur_val;
        } else if (cur_val < pre_max_val) {
            continue;
        }
    }
    
    cout << pre_max_val << endl;

    return 0;
}