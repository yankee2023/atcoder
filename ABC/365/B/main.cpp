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

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // 最大値を取得し0置換
    vector<int>::iterator itr = max_element(A.begin(), A.end());
    size_t maxIndex = distance(A.begin(), itr);
    A[(int)maxIndex] = 0;
    // 再度最大値(2番目の最大値)を取得
    itr = max_element(A.begin(), A.end());
    size_t ansIndex = distance(A.begin(), itr);
    
    cout << ansIndex+1;

    return 0;
}