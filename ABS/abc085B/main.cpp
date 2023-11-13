#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, ans = 1, pre_d = 0;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    
    // 降順にソート
    sort(d.begin(), d.end(), greater<int>());

    // 1つ目はOKなので、の初期値は1
    // 一つ前を表すpre_dに0indexを代入
    pre_d = d[0];

    // 一つ前に取り出したものより小さいときだけ加算
    for (int i = 1; i < n; i++) {
        if (d[i] < pre_d) {
            pre_d = d[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}