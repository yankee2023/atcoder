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
    int N = 0, M = 0;
    std::cin >> N >> M;
    int H[N] = {0};
    for (int i = 0; i < N; i++)
    {
        std::cin >> H[i];
    }
    
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        M -= H[i];
        if (M < 0)
        {
            break;
        }
        ans++;
    }
    
    
    std::cout << ans << std::endl;

    return 0;
}