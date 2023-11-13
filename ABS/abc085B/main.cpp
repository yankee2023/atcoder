#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, ans = 0, pre_d = 0;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    
    // 降順にソート
    sort(d.begin(), d.end(), greater<int>());

    // 大きい方から取り出し
    // 一つ前に取り出したものと同じ大きさの場合は何もせずにスキップ
    for (int i = 0; i < n; i++) {
        if (0 == i) {
            pre_d = d[i];
            ans++;
            continue;
        } else {
            if (d[i] == pre_d) {
                continue;
            } else {
                pre_d = d[i];
                ans++;
            }
        }
    }
    cout << ans << endl;
}