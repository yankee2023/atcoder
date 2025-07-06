#include <iostream>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    rep(i, n) {
        int a;
        cin >> a;
        sum += a;
    }

    if (sum <= m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}