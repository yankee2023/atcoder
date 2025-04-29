
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans = 0;
    if (N % 2 == 0) { 
        while (N % 2 == 0) {
            if (N % 2 == 0) ans++;
            N = N / 2;
        }
    }

    cout << ans << endl;

    return 0;
}