#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
const ll INF = 1000000000;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<ll> A(n+1, 0);
    bool isFirst = false;
    ll tmp = 0;
    rep(i,n+1) {
        if (i < k) A[i] = 1;
        else {
            if (!isFirst) { // 初回のみ合計値を出す
                int kCopy = k;
                while (kCopy != 0) {
                    A[i] += A[i-kCopy];
                    kCopy--;
                }
                A[i] %= INF;
                isFirst = true;
                tmp = A[i];
            } else {    // 一番古い値を引いて、新しい値を足す
                tmp -= A[i-k-1];
                tmp += A[i-1];
                A[i] = tmp % INF;
            }
        }
    }

    cout << A[n] % INF << endl;
    return 0;
}