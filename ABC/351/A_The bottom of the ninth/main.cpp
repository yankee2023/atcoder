#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    int aSome = 0;
    int bSome = 0;

    for (int i = 0; i < 9; i++)
    {
        std::cin >> input;
        aSome += input;
    }
    for (int i = 0; i < 8; i++)
    {
        std::cin >> input;
        bSome += input;
    }
    
    int ans = aSome - bSome + 1;
    std::cout << ans << std::endl;

    return 0;
}