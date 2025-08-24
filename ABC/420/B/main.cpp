#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (string &si : s) cin >> si;

    vector<int> a(n);
    rep(i,m) {
        int sum = 0;
        rep(j,n) {
            sum += s[j][i]-'0';
        }

        if (0 == sum || n == sum) {
            rep(k,n) a[k]++;
        } else if (sum <= n/2) {
            rep(k,n) {
                if (s[k][i] == '1') a[k]++;
            }
        } else if (n/2 < sum) {
            rep(k,n) {
                if (s[k][i] == '0') a[k]++;
            }
        }
    }

    int max = *max_element(a.begin(), a.end());
    rep(i,n){
        if (a[i] == max) cout << i+1 << " ";
    }

    return 0;
}