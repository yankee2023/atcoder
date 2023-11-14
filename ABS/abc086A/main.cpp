#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int product = a*b;
    if (0 == (product % 2)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    return 0;
}