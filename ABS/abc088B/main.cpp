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
    
    sort(a.begin(), a.end());
    int alice = 0, bob = 0;
    for (int i = 0; i < n; i++) {
        int point = a[n-1-i];
        // 偶数奇数でどちらへの得点か決まる
        if (0 == i % 2) {
            alice += point;
        } else if (1 == i % 2) {
            bob += point;
        }
    }

    cout << alice - bob << endl;
}