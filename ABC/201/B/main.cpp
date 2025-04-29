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
    // int N;
    // cin >> N;
    // vector<string> S(N);
    // vector<int> T(N);
    // map<int, string> mountain{};
    // for (int i = 0; i < N; i++)
    // {
    //     cin >> S[i] >> T[i];
    //     mountain.insert(pair<int, string>(T[i], S[i]));
    // }
    // sort(T.begin(), T.end());
    
    // cout << mountain[T[N-2]] << endl;

    int N; cin >> N;
    vector<string> S(N);
    vector<int> T(N);
    pair<int,string> top,sec;
    top = sec = {0,""};
    for(int i=0; i<N; i++){
        cin >> S[i] >> T[i];
        auto p = make_pair(T[i],S[i]);
        if(top < p){
            sec = top;
            top = p;
        }
        else if(sec < p){
            sec = p;
        }
    }
    cout << sec.second << endl;

    return 0;
}