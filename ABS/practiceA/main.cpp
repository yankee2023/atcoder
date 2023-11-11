#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    vector<int> b(2);
    string s;
    cin >> a;
    for (int i = 0; i < 2; i++) {
        cin >> b.at(i);
    }
    cin >> s;
    
    int sum = 0;
    sum = a + b.at(0) + b.at(1);
    cout << sum << " " << s << endl;
}

// 解答例
// #include<iostream>
// using namespace std;
// int main()
// {
//     // 整数の入力
//     int a;
//     cin >> a;
//     // スペース区切りの整数の入力
//     int b,c;
//     cin >> b >> c;
//     // 文字列の入力
//     string s;
//     cin >> s;
//     // 出力
//     cout << (a+b+c) << " " << s << endl;
//     return 0;
// }
