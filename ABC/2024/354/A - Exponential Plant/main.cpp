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
    int H, plantH=1, ans=1;
    cin >> H;
    while (plantH <= H)
    {
        plantH += pow(2, ans);
        ans++;
    }

    cout << ans;
    
    return 0;
}