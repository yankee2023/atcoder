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
    string S, T;
    cin >> S >> T;

    int SLength = S.length();   
    for (int w = 1; w < SLength; ++w)
    {
        for (int c = 0; c < w; ++c)
        {
            string now = "";
            for (int  i = c; i < SLength; i += w) 
            {
                now += S[i];
            }
            if (now == T)
            {
                cout << "Yes";
                return 0;
            }   
        }
    }
    
    cout << "No";

    return 0;
}