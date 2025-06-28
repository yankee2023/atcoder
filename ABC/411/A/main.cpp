#include <iostream>
#include <string>

using namespace std;

int main()
{
    string p;
    int l;
    cin >> p >> l;
    if (l <= p.size()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}