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
    map<string, int> dic;
    string s;
    rep(i, n) {
        cin >> s;
        // findは0, 1しか返さない
        if (0 == dic.count(s)) dic.insert(pair<string, int>(s, 1));
        else ++dic[s];
    }

    int mode = 0;
    vector<pair<int, string>> dicList;
    for (auto v : dic) {
        // cout << v.first << " " << v.second << endl;
        mode = max(mode, v.second);
        dicList.push_back(pair(v.second, v.first));
    }
    sort(dicList.rbegin(), dicList.rend());

    vector<string> sList;
    rep(i, dicList.size()) {
        if (dicList[i].first == mode) sList.push_back(dicList[i].second);
        else break;
    }

    sort(sList.begin(), sList.end());
    for (auto s : sList) cout << s << endl;

    return 0;
}