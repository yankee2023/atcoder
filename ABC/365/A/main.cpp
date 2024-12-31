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
    int Y;
    cin >> Y;
    
    if (Y % 4 != 0)
    {
        cout << 365;
    }
    else if (Y % 4 == 0 && Y % 100 != 0)
    {
        cout << 366;
    }
    else if (Y % 100 == 0 && Y % 400 != 0)
    {
        cout << 365;
    }
    else
    {
        cout << 366;
    }
    
    return 0;
}