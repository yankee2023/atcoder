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

// 2連続の時はどっちかは勝てない
// 2連続している箇所をカウントして全体の試合数から引く

int main()
{
    int N;
    string S;
    cin >> N >> S;

    int count = 0;
    char current='@', pre='@';
    for (int i = 0; i < N; i++)
    {
        if (pre != '@')
        {
            current = S[i];
            if (current == pre)
            {
                ++count;
                pre = '@';
                continue;
            }
        }
        pre = S[i];
    }
    
    cout << N-count;
    return 0;
}