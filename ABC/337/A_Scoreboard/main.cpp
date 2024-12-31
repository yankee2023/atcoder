#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int x, y;
    int takahashi = 0, aoki = 0;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        takahashi += x;
        aoki += y;
    }

    if (takahashi < aoki) {
        cout << "Aoki" << endl;
    } else if (takahashi == aoki) {
        cout << "Draw" << endl;
    } else {
        cout << "Takahashi" << endl;
    }
    
    return 0;
}