#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const int INF = 1 << 30;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> m(M+1, 1);
    rep(i, N) {
        int L;
        cin >> L;
        vector<int> X(L);
        rep (j, L) cin >> X[j];
        rep(j, L) {
            if (m[X[j]] == 1) {
                cout << X[j] << endl;
                m[X[j]] = 0;
                break;
            }
            if (j == L - 1) {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}