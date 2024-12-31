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
    string N, VnS;
    std::cin >> N;
    long long NS = std::stoi(N);
    int divide = 998244353;

    for (int i = 0; i < NS; i++)
    {
        VnS += N;
    }

    long long Vn = std::stoll(VnS);
    
    std::cout << Vn % divide << std::endl;

    return 0;
}