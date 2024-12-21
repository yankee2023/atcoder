#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    char A[N][N], B[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> B[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] != B[i][j])
            {
                std::cout << i+1 << " " << j+1 << std::endl;
                break;
            }
        }
    }

    return 0;
}