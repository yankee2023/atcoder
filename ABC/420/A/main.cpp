#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    x += y;
    if (x <= 12) cout << x << endl;
    else cout << x - 12 << endl;
    return 0;
}