#include <iostream>
#include <string>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)

int main()
{
    string s;
    cin >> s;
    
    auto take = [&]() {
        rep(i, s.size()) {
            if (s[i] == '#') {
                s[i] = '.';
                return i;
            }
        }
        return -1;
    };

    while (1) {
        int i = take();
        if (i == -1) break;
        int j = take();
        cout << i+1 << ',' << j+1 << endl;
    }
    return 0;
}