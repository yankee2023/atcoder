#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= N; k++) {
                if (N >= i + j + k) cout << i << " " << j << " " << k << endl;
            }
        }
    }
    
    return 0;
}