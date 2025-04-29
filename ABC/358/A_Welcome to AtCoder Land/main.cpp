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
    string S, T, ans = "No";
    std::cin >> S >> T;


    if (S == "AtCoder")
    {
        if (T == "Land")
        {
            ans = "Yes";
        }
    }

    std::cout << ans << std::endl;

    return 0;
}