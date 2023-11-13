#include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    // x: 10000, y: 5000, z: 1000
    int x, y, z;

    // 10000
    for (int a = 0; a <= N; a++) {
        if (a*10000 == Y && a == N ) {
            x = a;
            y = 0;
            z = 0;
            cout << x << " " << y << " " << z << endl;
            return 0;
        }
        
        // 5000
        for (int b = 0; b <= N-a; b++) {
            if (a*10000 + b*5000 == Y && a+b == N) {
                x = a;
                y = b;
                z = 0;
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
            
            // 1000
            for (int c = 0; c <= N-a-b; c++)  {
                if (a*10000 + b*5000 + c*1000 == Y && a+b+c == N) {
                    x = a;
                    y = b;
                    z = c;
                    cout << x << " " << y << " " << z << endl;
                    return 0;
                }
            }
        }
    }    

    cout << -1 << " " << -1 << " " << -1 << endl;

    
    return 0;
}