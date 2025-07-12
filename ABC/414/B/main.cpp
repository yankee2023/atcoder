#include <iostream>
#include <string>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    int n;
    cin >> n;
    string s;
    rep(i, n) {
        char c;
        ll l;
        cin >> c >> l;
        if (100 < l) {
            s = "Too Long";
            break;
        }
        rep(j, l) s += c;
        if (100 < s.length()) break;
    }
    if (s.length() <= 100) cout << s << endl;
    else cout << "Too Long" << endl;
    return 0;
}