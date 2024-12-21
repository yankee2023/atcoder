#include <bits/stdc++.h>

int main()
{
    int N, X, Y, Z;
    std::cin >> N >> X >> Y >> Z;

    if (X <= Y)
    {
        while (X <= Y)
        {
            if (Z == X)
            {
                std::cout << "Yes" << std::endl;
                return 0;
            }
            
            ++X;
        }
    } 
    else if (Y <= X)
    {
        while (X >= Y)
        {
            if (Z == X)
            {
                std::cout << "Yes" << std::endl;
                return 0;
            }

            --X;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}