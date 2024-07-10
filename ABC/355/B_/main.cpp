#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int fa=0, fb=0, f=0;
    for (int i=0; i<n+m; i++){
        if(a[fa] > b[fb]){
            fb += 1;
            f = 0;
        } else if(a[fa] < b[fb]) {
            fa += 1;
            f += 1;
            if (f==2){
                cout << "Yes";
                return 0;
            }
        }
        if(fa >= n){
            cout << "No";
            return 0;
        }
    }
    cout << "No";
    return 0;
}