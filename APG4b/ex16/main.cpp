#include <bits/stdc++.h>
using namespace std;

void none_loop(vector<int> data) {
    if (data.at(0) == data.at(1)) {
        cout << "YES" << endl;
    } else if (data.at(1) == data.at(2)) {
        cout << "YES" << endl;
    } else if (data.at(2) == data.at(3)) {
        cout << "YES" << endl;
    } else if (data.at(3) == data.at(4)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void loop(vector<int> data) {
    for (int i = 0; i < data.size() - 1; i++) {
        if (data.at(i) == data.at(i+1)) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }
    loop(data);
}
