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
using ll = long long;

int main()
{
    int A, B;
    string S;
    cin >> A >> B;
    cin >> S;

    if (S.size() != A+B+1)
    {
        cout << "No" << endl;
        return 0;
    }

    // A+1文字目は"-"であることの確認
    if (S[A] != '-')
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < A; i++)
    {
        if (S[i] < 0 || 9 < S[i])
        {
            cout << "No" << endl;
            return 0;
        }   
    }
    for (int i = A+2; i < A+B+1; i++)
    {
        if (S[i] < 1 || 9 < S[i])
        {
            cout << "No" << endl;
            return 0;
        }   
    }
    
    cout << "Yes" << endl;
    
    return 0;
}