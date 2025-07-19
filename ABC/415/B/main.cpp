#include <iostream>
#include <string>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    string s;
    cin >> s;
    
    int cnt = 0;
    for (char c : s) if (c == '#') ++cnt;
    cnt /= 2;

    for (int i = 0; i < s.size();) {
        bool left = false, right = false;
        while(left == false || right == false) {
            if (!left && s[i] == '#') {
                left = true;
                cout << i+1 << ',';
                ++i;
                continue;
            } else if (s[i] == '.') {
                ++i;
                continue;
            } else if (!right && s[i] == '#') {
                right = true;
                cout << i+1 << endl;
                ++i;
                cnt--;
                continue;
            }
        }
        if (cnt == 0) break;
    }
    return 0;
}