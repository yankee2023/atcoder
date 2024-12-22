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
#include <list>

using namespace std;
using ll = long long;

int main()
{
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<vector<char>> s(w, vector<char>(h, ' '));
    vector<vector<bool>> visited(w, vector<bool>(h, false));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++) cin >> s[i][j];
    }
    string t;
    cin >> t;

    int ans = 0;
    x--, y--;
    for (size_t i = 0; i < t.length(); i++)
    {
        if (t[i] == 'U')
        {
            if (s[x-1][y] == '.') x--;
            else if (s[x-1][y] == '@')
            {
                ans++;
                s[x-1][y] = '.';
                x--;
            }
        }
        else if (t[i] == 'D')
        {
            if (s[x+1][y] == '.') x++;
            else if (s[x+1][y] == '@')
            {
                ans++;
                s[x+1][y] = '.';
                x++;
            }
        }
        else if (t[i] == 'L')
        {
            if (s[x][y-1] == '.') y--;
            else if (s[x][y-1] == '@')
            {
                ans++;
                s[x][y-1] = '.';
                y--;
            }
        }
        else
        {
            if (s[x][y+1] == '.') y++;
            else if (s[x][y+1] == '@')
            {
                ans++;
                s[x][y+1] = '.';
                y++;
            }
        }
    }
    
    cout << ++x << " " << ++y << " " << ans << endl;

    return 0;
}