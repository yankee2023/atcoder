#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    // アルファベット数分の箱を用意
    vector<int> mx(26);
    int l = 0;

    while (l < N) {
        int r = l + 1;
        while (r < N && S[l] == S[r]) {
            ++r;
        }
        
        int c = S[l] - 'a';
        mx[c] = max(mx[c], r - l);
        l = r;
    }
    
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        ans += mx[i];
    }
    
    cout << ans << endl;

    return 0;
}