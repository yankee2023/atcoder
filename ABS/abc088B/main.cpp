#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // 昇順にソート
    sort(a.begin(), a.end());
    
    int alice = 0, bob = 0;
    for (int i = 0; i < n; i++) {
        // 大きい方から取っていく
        int point = a[n-1-i];
        // パリティ(偶数奇数)分けでどちらへの得点か決まる
        if (0 == i % 2) {
            alice += point;
        } else if (1 == i % 2) {
            bob += point;
        }
    }

    cout << alice - bob << endl;
}