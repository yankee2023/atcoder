#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    // N×Nのchar型の2次元配列のすべての要素を'-'で初期化
    vector<vector<char>> game_table(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++) {
        A.at(i)--;
        B.at(i)--;
        game_table.at(A.at(i)).at(B.at(i)) = 'o';
        game_table.at(B.at(i)).at(A.at(i)) = 'x';
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << game_table.at(i).at(j);
            if (j == N-1) {
                cout << endl;   // 末尾なら改行
            } else {
                cout << " ";    // それ以外なら空白
            }
        }
        
    }
}
