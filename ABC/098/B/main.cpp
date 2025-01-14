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

int main()
{
    int N;
    string S;
    cin >> N >> S;
    
    string zenhan, kohan;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp = 0;
        zenhan = S.substr(0, i);
        kohan = S.substr(i, S.size());
        set<char> a,b;
	    for(auto c : zenhan) a.insert(c);
	    for(auto c : kohan) b.insert(c);
	    for(auto c : a) if(b.contains(c)) tmp++;
	    ans = max(ans,tmp);
    }

    cout << ans << endl;
    return 0;
}