#include <iostream>
#include <string>
using namespace std;

int N;
int t[101010], x[101010], y[101010];

string solve() {
    int pt = 0, px = 0, py = 0;
    for (int i = 0; i < N; i++) {
        // 一回の移動量が上下左右のみなので、移動量はマンハッタン距離
        int d = abs(px - x[i]) + abs(py - y[i]);
        // 移動に使える時間(回数)を計算
        int dt = t[i] - pt;

        // 移動時間が移動距離より短い場合はNG
        // その場にとどまれないので、(dt - d)が偶数なら移動可能
        // ・最短距離で移動した後に使える時間がdt-d
        // ・目標の座標を右へ1つ移動->左へ1つ移動で目標の座標に戻るという動作で時間の調整ができる
        // ・この時間の調整で目標の座標に最後にとどまれるのはdt-dが偶数のときだけ
        if (dt < d || (dt - d) % 2 == 1) {
            return "No";
        }

        pt = t[i];
        px = x[i];
        py = y[i];
    }

    return "Yes";
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    cout << solve() << endl;
    return 0;
}