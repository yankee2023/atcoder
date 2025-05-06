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
    int n;
    cin >> n;
    set<string> name;
    vector<pair<string, int>> restaurant;
    rep(i,n) {
        string s;
        int p;
        cin >> s >> p;
        name.insert(s);
        restaurant.push_back(pair<string, int>(s, p));
    }

    for (string s: name) {
        vector<int> score;
        for (pair<string, int> v: restaurant) {
            if (v.first == s) score.push_back(v.second);
        }
        sort(score.rbegin(), score.rend());
        rep(i,score.size()) {
            auto itr = find(restaurant.begin(), restaurant.end(), pair<string, int>(s, score[i]));
            cout << (itr-restaurant.begin())+1 << endl;
        }

    }
    return 0;
}