#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<3> math(0);
    cin >> math;
    cout << math.count() << endl;
}