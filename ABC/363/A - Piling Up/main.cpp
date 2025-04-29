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
    int R;
    cin >> R;
    if (1 <= R && R <=99)
    {
        cout << 100-R;
    }
    else if (100 <= R && R <= 199)
    {
        cout << 200-R;
    }
    else if (200 <= R && R <= 299)
    {
        cout << 300-R;
    }
    else if (300 <= R && R <= 499)
    {
        cout << 500-R;
    }
    
    return 0;
}