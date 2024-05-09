#include <iostream>

int main()
{
    std::string S;
    std::cin >> S;

    std::string matsubi_s = S.substr(3, 3);
    int matsubi_i = stoi(matsubi_s);

    if (316 == matsubi_i)
    {
        std::cout << "No" << std::endl;
    }
    else if (0 == matsubi_i)
    {
        std::cout << "No" << std::endl;
    }
    else if (350 <= matsubi_i)
    {
        std::cout << "No" << std::endl;
    }
    else 
    {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}