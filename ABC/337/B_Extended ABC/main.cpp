#include <bits/stdc++.h>
using namespace std;

#define A_FLAG  (1 << 0)
#define B_FLAG  (1 << 1)
#define C_FLAG  (1 << 2)

int main()
{
    string S;
    cin >> S;

    uint flag;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A') {
            flag |= A_FLAG;
            continue;
        } else if (S[i] == 'B') {
            if (flag & (A_FLAG)) {
                flag |= B_FLAG;
                continue;
            } else {
                flag = 0;
                continue;
            }
        } else {
            if ((flag & A_FLAG) && (flag & B_FLAG)) {
                flag |= C_FLAG;
                break;
            } else {
                flag = 0;
                continue;
            }
        }
    }

    if ((flag & A_FLAG) && (flag & B_FLAG) && (flag & C_FLAG)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}