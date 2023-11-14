#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int count = 0;
    bool odd_flag = false;
    while (true) {
        for (int i = 0; i < n; i++) {
            // どれか一つの要素が奇数の場合はforループから脱出
            if (1 == a.at(i) % 2) {
                odd_flag = true;
                break;
            }
            a.at(i) = a.at(i) / 2;
        }

        if (odd_flag) {
            // whileループから脱出
            break;
        }
        count++;
    }
    
    cout << count << endl;
    return 0;
}