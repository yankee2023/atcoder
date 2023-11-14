#include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    // x: 10000, y: 5000, z: 1000

    for (int a = 0; a <= N; a++) {
        for (int b = 0; b <= N-a; b++) {
            int c = N - a - b;
            if (a*10000 + b*5000 + c*1000 == Y) {
                cout << a << " " << b << " " << c << endl;
                return 0;
            }
        }
    }    

    cout << "-1 -1 -1" << endl;

    
    return 0;
}