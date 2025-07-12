#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = 1 << 30;

string toBaseN(int n, int base) {
    string digits = "0123456789";
    string result;
    while (n > 0) {
        result += digits[n % base];
        n /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}

bool isPalindrome(const string& s) {
    int length = s.size();
    for (int i = 0; i < length / 2; ++i) {
        if (s[i] != s[length - 1 - i]) return false;
    }
    return true;
}

int main()
{
    int a;
    ll n;
    cin >> a >> n;
    
    int ans = 0;
    for (ll i = 1; i <= n; ++i) {
        if (!isPalindrome(to_string(i))) continue;
        string s = toBaseN(i, a);
        if (isPalindrome(s)) ans += i;
    }
    cout << ans << endl;
    return 0;
}