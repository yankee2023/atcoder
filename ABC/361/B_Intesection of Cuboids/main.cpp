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
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    int minPoint = max(g, h);
    minPoint = max(minPoint, i);
    int maxPoint = max(j, k);
    maxPoint = max(maxPoint, l);
    if (minPoint < d || minPoint < e || minPoint < f ||
        maxPoint < a || maxPoint < b || maxPoint < c)
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }

    return 0;
}