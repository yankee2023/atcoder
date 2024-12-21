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
    int N, K, X;
    cin >> N >> K >> X;
    int A;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        if (i != 0)
        {
            cout << " ";
        }
        cout << A;
        if (i == (K -1))
        {
            cout << " " << X;
        }
    }

    return 0;
}