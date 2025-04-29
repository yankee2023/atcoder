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
    vector<vector<char>> s(w+1, vector<char>(h+1, ' '));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> s[j][i];
        }
    }
    string t;
    cin >> t;

    vector<vector<bool>> ans_vec(w, vector<bool>(h, false));
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == 'U')
        {
            if (s[x-1][y] == '.') x--;
            else if (s.at(x-1).at(y) == '@')
            {
                ans_vec.at(x-1).at(y) = true;
            }
        }
        else if (t[i] == 'D')
        {
            if (s.at(x+1).at(y) == '.') x++;
            else if (s.at(x+1).at(y) == '@')
            {
                ans_vec.at(x+1).at(y) = true;
            }
        }
        else if (t[i] == 'L')
        {
            if (s.at(x).at(y-1) == '.') y--;
            else if (s.at(x).at(y-1) == '@')
            {
                ans_vec.at(x).at(y-1) = true;
            }
        }
        else
        {
            if (s.at(x).at(y+1) == '.') y++;
            else if (s.at(x).at(y+1) == '@')
            {
                ans_vec.at(x).at(y+1) = true;
            }
        }
    }

    int ans_count = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (ans_vec.at(j).at(i) == true)  ans_count++;
        }
    }
    
    cout << x << " " << y << " " << ans_count << endl;

    return 0;
}