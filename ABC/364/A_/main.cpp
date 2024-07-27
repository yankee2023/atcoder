
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
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        if (1 <= i && i < N-1)
        {
            if (S[i] == "sweet" && S[i-1] == S[i])
            {
                cout << "No";
                return 0;
            }
        }
    }
    
    cout << "Yes";

    return 0;
}