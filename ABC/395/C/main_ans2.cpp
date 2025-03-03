#include <iostream>
#include <vector>
#include <map>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
constexpr int INF = 1 << 30;

/**
 * @brief 2回以上出現した数字のキョリを測る解法
 * @return int 
 */
int main()
{
    // 入力
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    // Key:出現数字、Value:出現場所
    map<int, vector<int>> intMap;
    rep(i,n) {
        if (intMap.end() == intMap.find(a[i])) intMap.insert(pair(a[i], vector<int>{i}));
        else intMap[a[i]].push_back(i);
    }

    int ans = INF;
    for (auto v: intMap) {
        rep(i,v.second.size()-1) ans = min(ans, v.second[i+1]-v.second[i]+1);
    }
    
    if (ans == INF) ans = -1;
    cout << ans << endl;
    
    return 0;
    }
    