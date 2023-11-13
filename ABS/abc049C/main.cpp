#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    int len = S.length();
    int index = 0;
    while (true) {
        if (S.substr(index, 5) == "dream") {
            index += 5;
            continue;
        } else if (S.substr(index, 7) == "dreamer") {
            index += 7;
            continue;
        } else if (S.substr(index, 6) == "eraser") {
            index += 6;
            continue;
        } else if (S.substr(index, 5) == "erase") {
            index += 5;
            continue;
        } else if (len <= index) {
            break;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    
    return 0;
}