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

int main()
{
    string S;
    cin >> S;

    bool ansFlag = false;
    // 先頭がAかどうかの判別
    if (S[0] == 'A')
    {   // substr(start, len)
        S = S.substr(2, S.length() - 3);    // 先頭2文字目~末尾-1を取り出し
        bool findCFlag = false;
        for (int i = 0; i < S.length(); i++)
        {
            // 先頭から2文字除き、残りにCを含むかの判別
            if (S[i] == 'C')
            {
                findCFlag = true;
                break;
            }
        }

        if (findCFlag)
        {   // 小文字かどうかの判別
            for (int i = 0; i < S.length(); i++)
            {
                if (S[i] >= 'a' && S[i] <= 'z')  ansFlag = true;
                else
                {
                    ansFlag = false;
                    break;
                }
            }
        }
    }
    
    if (ansFlag) cout << "AC" << endl;
    else cout << "WA" << endl;

    return 0;
}