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
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    ll N, Y;
    cin >> N >> Y;

    int man_ans = -1, gosen_ans = -1, sen_ans = -1;
    for (int a = 0; a <= N; a++)
    {
        for (int b = 0; b <= N-a; b++)
        {
            if (Y == 10000*a + 5000*b + 1000*(N-a-b))
            {
                man_ans = a;
                gosen_ans = b;
                sen_ans = N - a - b;
            }
        }
    }

    // 全探索（TLEになる）
    // for (int a = 0; a <= N; ++a) {
    //     for (int b = 0; b <= N; ++b) {
    //         for (int c = 0; c <= N; ++c) {
    //             if (Y == a*10000 + b*5000 + c*1000 && a + b + c <= N) {
    //                 man_ans = a;
    //                 gosen_ans = b;
    //                 sen_ans = c;
    //             }
    //         }
    //     }
    // }

    cout << man_ans << " " << gosen_ans << " " << sen_ans << endl;
    
    return 0;
}