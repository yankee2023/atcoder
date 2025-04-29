#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i);

// 0:下、1:右、2:上、3:左、4:右下、5:右上、6:左上、7:左下
vector<int> DX = {1, 0, -1, 0, 1, -1, 1, -1};
vector<int> DY = {0, 1, 0, -1, 1, 1, -1, -1};

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> S(H);   // 長方形の盤面はvector<string>
    for (int i = 0; i < H; i++) cin >> S[i];

    // 各マス(i, j)を順に処理
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            // 空きマス以外は何もしない
            if (S[i][j] != '.') continue;
            
            // 周囲8マスの'#'の個数を数える
            int counter = 0;
            for (int d = 0; d < 8; d++)
            {
                // マス(i, j)の周囲マスを(ni, nj)とする
                int ni = i + DX[d];
                int nj = j + DY[d];

                // マス(ni, nj)が盤面外の場合、スキップ
                if (ni < 0 || H <= ni || nj < 0 || W <= nj) continue;

                // '#'ならインクリメント
                if (S[ni][nj] == '#') ++counter;
            }

            // マス(i, j)に個数をchar型に変換して記録
            S[i][j] = '0' + counter;
        }
    }
    
    // 出力
    for (auto row: S) cout << row << endl;
       
    return 0;
}