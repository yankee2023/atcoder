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
    string S;
    std::cin >> S;

    int length = S.length();
    int upper = 0;
    for (int i = 0; i < length; i++)
    {
        if (isupper(S[i]))
        {
            upper++;
        }
    }

    if (length/2 < upper)
    {
        for (int i = 0; i < length; i++)
        {
            if (islower(S[i]))
            {
                S[i] = std::toupper(S[i]);
            }   
        }
    }
    else {
        for (int i = 0; i < length; i++)
        {
            if (isupper(S[i]))
            {
                S[i] = std::tolower(S[i]);
            }   
        }
    }
    
    std::cout << S << std::endl;

    return 0;
}