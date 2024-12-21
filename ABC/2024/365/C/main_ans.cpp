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

int main()
{
    int N;
    ll M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // ラムダ式
    // 二分探索結果の判定用関数
    auto f = [&](int x) -> bool {
        ll s = 0;
        for (int i = 0; i < N; i++) s += min(x, A[i]);
        return s <= M;
    };

    const int INF = 1001001001;
    if (f(INF)) cout << "infinite" << endl;
    else {
        int ac = 0, wa = INF;
        while (ac+1 < wa) {
            int wj = (ac+wa)/2;
            if (f(wj)) ac = wj;
            else wa = wj;
        }
        cout << ac << endl;
    }
    
    return 0;
}