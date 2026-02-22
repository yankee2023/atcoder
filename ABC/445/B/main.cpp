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
    int N;
    string S;
    cin >> N;

    vector<string> T(N);
    int maxLen = 0;
    rep(i, N) {
        cin >> T[i];
        maxLen = max(maxLen, (int)T[i].size());
    }

    for (int i = 0; i < T.size(); ++i) {
        int len = T[i].size();
        if (len < maxLen) {
            for (int j = 0; j < (maxLen - len)/2; ++j) {
                string tmp = ".";
                T[i].insert(T[i].begin(), '.');
                T[i].insert(T[i].end(), '.');
            }
        }
        cout << T[i] << endl;
    }
    return 0;
}