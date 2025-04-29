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

    vector<int> ans;
    int main()
    {
        vector<int> cards(100);
        int q;
        cin >> q;

        rep(i, q) {
            int query;
            cin >> query;
            if (query == 1) {
                int x;
                cin >> x;
                cards.push_back(x);
            }
            else {
                ans.push_back(cards[cards.size()-1]);
                cards.pop_back();
            }
        }

        rep(i,ans.size()) cout << ans[i] << endl;
        return 0;
    }