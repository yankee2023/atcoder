#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int x;
    int y;
} Parts;

int main()
{
    int N, Q;
    cin >> N >> Q;

    Parts parts[N];
    for (int i = 0; i < N; i++) {
        parts[i].x = i + 1;
        parts[i].y = 0;
    }

    int query;
    string C;
    for (int i = 0; i < Q; i++) {
        cin >> query >> C;

        if (query == 1) {
            int pre_x = parts[0].x;
            int pre_y = parts[0].y;
            if (C == "R") {
                parts[0].x++;
            } else if (C == "L") {
                parts[0].x--;
            } else if (C == "U") {
                parts[0].y++;
            } else if (C == "D") {
                parts[0].y--;
            }

            // パーツi(2≤i≤N)は移動前にパーツi−1 があった座標に移動
            for (int i = 1; i < N; i++) {
                swap(pre_x, parts[i].x);
                swap(pre_y, parts[i].y);
            }
            
        } else {
            cout << parts[stoi(C) - 1].x << " " << parts[stoi(C) - 1].y << endl;;
        }
    }
    
    return 0;
}