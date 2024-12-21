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

// ソートして後ろから2つ目が２番目に大きいもの
// 元の数列から取り出した値のインデックスを取得する
// ※「すべて異なる数値」だからできる方法

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> B = A;
    sort(B.begin(), B.end());
    int x = B[N-2];

    for (int i = 0; i < N; i++)
    {
        if (A[i] == x)
        {
            cout << i+1 << endl;
        }
        
    }
    
    return 0;
}