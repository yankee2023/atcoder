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
    int A, B;
    cin >> A >> B;
    
    if (A == B)
    {
        cout << -1;
        return 0;
    }
    cout << (6 - A - B);
    
    return 0;
}