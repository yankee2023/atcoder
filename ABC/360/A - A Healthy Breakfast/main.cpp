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
    char S;
    for (int i = 0; i < 3; i++)
    {
        cin >> S;
        if (S == 'R')
        {
            cout << "Yes";
            return 0;
        }
        else if (S == 'M')
        {
            cout << "No";
            return 0;
        }
        else
        {
            continue;
        }
    }

    return 0;
}