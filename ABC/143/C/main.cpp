#include <iostream>
#include <string>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
constexpr int INF = 1 << 30;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < s.size();)
    {
        int j = i + 1;
        while (j < s.size() && s[i] == s[j]) ++j;
        
        ++ans;
        i = j;
    }
    cout << ans << endl;
    return 0;
}