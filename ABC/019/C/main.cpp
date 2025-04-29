#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
constexpr int INF = 1 << 30;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end());
    set<ll> st;
    for (size_t i = 0; i < a.size(); ++i)
    {
        ll tmp = a[i];
        while (tmp % 2 == 0) {
            tmp /= 2;
        }

        st.insert(tmp);
    }

    cout << st.size() << endl;
    return 0;
}