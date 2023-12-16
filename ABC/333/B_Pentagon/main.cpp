#include <bits/stdc++.h>
using namespace std;

int pentagon_score(char a, char b)
{
    if (a == 'A') {
        if (b == 'B' || b == 'E') {
            return 1;
        } else {
            return 2;
        }
    } else if (a == 'B') {
        if (b == 'A' || b == 'C') {
            return 1;
        } else {
            return 2;
        }
    } else if (a == 'C') {
        if (b == 'B' || b == 'D') {
            return 1;
        } else {
            return 2;
        }
    } else if (a == 'D') {
        if (b == 'C' || b == 'E') {
            return 1;
        } else {
            return 2;
        }
    } else if (a == 'E') {
        if (b == 'A' || b == 'D') {
            return 1;
        } else {
            return 2;
        }
    }
    return -1;
}

int main()
{
    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;

    int s_score = pentagon_score(s1, s2);
    int t_score = pentagon_score(t1, t2);

    if (s_score == t_score) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}