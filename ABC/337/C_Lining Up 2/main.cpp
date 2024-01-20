#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N+1);
    vector<int> ans(N+1);
    int flag = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        if (A[i] == -1) {
            flag = i;
            cout << i;
        }
    }

    int ans_cnt = 2;
    vector<int>::iterator itr;
    while (ans_cnt <= N) {
        itr = find(A.begin(), A.end(), flag);
        flag = distance(A.begin(), itr);
        ans[ans_cnt] = flag;
        ans_cnt++;
        continue;
    }

    for (int i = 2; i <= N; i++) {
        cout << " " << ans[i];
    }

    return 0;
}