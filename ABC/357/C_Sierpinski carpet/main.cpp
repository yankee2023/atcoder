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
    int N;
    std::cin >> N;

    vector<vector<char>> K(3, vector<char>(3));
    K[0][0] = '#';
    K[0][1] = '#';
    K[0][2] = '#';
    K[1][0] = '#';
    K[1][1] = '.';
    K[1][2] = '#';
    K[2][0] = '#';
    K[2][1] = '#';
    K[2][2] = '#';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << K[i][j];
        }
        std::cout << std::endl;
    }
    

    return 0;
}