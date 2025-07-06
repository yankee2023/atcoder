#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = 1 << 30;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (string& si : s) cin >> si;

    set<string> ansList;
    rep(i, n) rep(j, n) {
        if (i == j ) continue;
        string t = s[i] + s[j];
        ansList.insert(t);
    }

    cout << ansList.size() << endl;

    return 0;
}