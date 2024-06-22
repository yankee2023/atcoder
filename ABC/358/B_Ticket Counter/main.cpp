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
    int N, A, ans = 0;
    std::cin >> N >> A;
    std::vector<int> T(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> T[i];
        if (ans < T[i])
        {
            ans = T[i] + A;
            std::cout << ans << std::endl; 
        }
        else
        {
            ans += A;
            std::cout << ans << std::endl;
        }
    }

    return 0;
}