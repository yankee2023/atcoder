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
    int N, T=0;
    cin >> N;
    vector<string> S(N);
    vector<int> C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i] >> C[i];
        T += C[i];
    }
    sort(S.begin(), S.end());
    cout << S[T % N];
    
    return 0;
}