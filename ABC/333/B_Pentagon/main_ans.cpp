#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 文字同士の引き算
 * @return true: 線分短い, false: 線分長い
*/
int near(char x, char y)
{
    if(x > y) {
            swap(x, y);
    }
    return y - x == 1 or y - x == 4;
}

int main() {
	char a, b, c, d;
	cin >> a >> b >> c >> d;

	if(near(a, b) == near(c, d))
		cout << "Yes\n";
	else
		cout << "No\n";
}
