#include <bits/stdc++.h>

int main()
{
    std::string S, T;
    std::cin >> S >> T;

    int j = 0;
    for (int i = 0; i < T.size(); i++)
    {
        if (S[j] == T[i])
        {
            std::cout << i + 1 << " ";
            ++j;
        }
    }
    
    return 0;
}