#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    int n, x;
    cin >> n;
    vector<int> a(n);
    for(int& ai : a) cin >> ai;
    cin >> x;

    rep(i, n) {
        if (a[i] == x) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}