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
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    
    int count = 0;
    int ans = S.length();
    for (int i = 0; i <= N-K; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (S[i+j] == S[j+K+1-j])
            {
                count++;
            }
        }
    }
    


    return 0;
}