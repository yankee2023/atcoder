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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) cout << "Yes";
    else if ((a+b) == c) cout << "Yes";
    else if ((a+c) == b) cout << "Yes";
    else if (a == (b+c)) cout << "Yes";
    else cout << "No";
    
    return 0;
}