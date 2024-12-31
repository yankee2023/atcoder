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

int main()
{
    int H, W, Sh, Sw;
    cin >> H >> W >> Sh >> Sw;
    // 配列用に-1する
    Sh--;
    Sw--;
    vector<vector<char>> C(H, vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> C.at(i).at(j);
        }
    }
    string X;
    cin >> X;

    for (int i = 0; i < X.length(); i++)
    {
        if (X[i] == 'L')
        {
            if (Sw != 0)
            {
                if (C.at(Sh).at(Sw-1) == '.')
                {
                    Sw--;
                }
                
            }
        }
        else if (X[i] == 'R')
        {
            if (Sw != H-1)
            {
                if (C.at(Sh).at(Sw+1) == '.')
                {
                    Sw++;
                }
            }
        }
        else if (X[i] == 'U')
        {
            if (Sh != 0)
            {   
                if (C.at(Sh-1).at(Sw) == '.')
                {
                    Sh--;
                }
            }
        }
        else if (X[i] == 'D')
        {
            if (Sh != W-1)
            {
                if (C.at(Sh+1).at(Sw) == '.')
                {
                    Sh++;
                }
            }
        }
    }

    cout << ++Sh << " " << ++Sw;
    
    return 0;
}