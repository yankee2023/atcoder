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

bool isAC(string S)
{
    // 先頭が'A'でない
    if (S[0] != 'A') return false;

    // Sの先頭2文字と末尾1文字を除いた'C'の個数を調べる
    int count_c = 0;
    for (int i = 2; i+1 < S.size(); i++)
    {
        if (S[i] == 'C') ++count_c;
    }
    if (count_c != 1) return false;
    
    // Sに含まれる大文字の個数を調べる
    int count_big = 0;
    for (auto c : S)
    {
        if (isupper(c)) ++count_big;
    }
    if (count_big != 2) return false;

    return true;
}

int main()
{
    string S;
    cin >> S;

    if (isAC(S)) cout << "AC" << endl;
    else cout << "WA" << endl;    
    
    return 0;
}