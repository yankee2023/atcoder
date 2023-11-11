#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    // 各桁の数字
    int digree = 0;
    int place_sum = 0;

    for (int i = 1; i <= n; i++) {
        digree = 0;
        place_sum = 0;
        int num = i;
        // 各桁の数字の和を計算
        while (num) {
            digree = num % 10;
            place_sum += digree;
            num = num / 10;
        }

        if (a <= place_sum && place_sum <= b) {
            ans += i;
        }
    }
    
    cout << ans << endl;
}