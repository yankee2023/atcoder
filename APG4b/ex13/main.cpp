#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 例題1
*/
void test_score_sum() {
    int n;
    cin >> n;

    vector<int> math_score(n);
    vector<int> english_score(n);

    // 数学の点数入力
    for (int i = 0; i < n; i++) {
        cin >> math_score.at(i);
    }
    // 英語の点数入力
    for (int i = 0; i < n; i++) {
        cin >> english_score.at(i);
    }
    
    // 各点数の出力
    for (int i = 0; i < n; i++) {
        cout << math_score.at(i) + english_score.at(i) << endl;
    }
}

void initialize_vector() {
    vector<int> vec(3, 10);     // {10, 10, 10}で初期化
    vec = vector<int>(100, 2);  // 100要素の配列を{2, 2, .. , 2}で上書き
    cout << vec.at(99) << endl;
}

/**
 * @brief ex13
*/
void ex13() {
    int n, sum = 0;
    cin >> n;
    vector<int> score(n);
    for (int i = 0; i < n; i++) {
        cin >> score.at(i);
        sum += score.at(i);
    }

    int ave = sum / n;
    for (int i = 0; i < n; i++) {
        int div = ave - score.at(i);
        if (div < 0) {
            cout << (-1)*div << endl;
        } else {
            cout << div << endl;
        }
    }
}

int main() {
    // test_score_sum();

    // initialize_vector();

    ex13();
}
