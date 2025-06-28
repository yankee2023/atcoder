#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    int n;
    cin >> n;
    vector<int> d(n-1);
    for (int& di : d) cin >> di;

    rep(i, d.size()) {
        int pre = 0;
        for (int j = i; j < d.size(); ++j) {
            int post = pre+d[j];
            cout << post << " ";
            pre = post;
        }
        cout << "\n";
    }

    return 0;
}