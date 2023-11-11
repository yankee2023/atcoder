#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    map<int, int> mapping;
    for (int x : a) {
        // map内を探してあったら加算
        // ない場合は登録する
        if (mapping.count(x)) {
            mapping.at(x)++;
        } else {
            mapping[x] = 1;
        }
    }

    // 出現頻度の高いKeyを見つける
    int max_num_key = 0;
    int max_num_value = 0;
    for (int x : a ) {
        if (max_num_key < mapping[x]) {
            max_num_key = x;
            max_num_value = mapping.at(x);
        }
    }
    cout << max_num_key << " " << max_num_value << endl;
}