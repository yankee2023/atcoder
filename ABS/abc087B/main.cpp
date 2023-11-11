#include <iostream>
using namespace std;

int main() {
    int five_hundred_coin, one_hundred_coin, fifty_coin;
    int input_sum;
    cin >> five_hundred_coin;
    cin >> one_hundred_coin;
    cin >> fifty_coin;
    cin >> input_sum;

    int count = 0;
    int sum_five_hundred = 0;
    int sum_one_hundred = 0;
    int sum_fifty = 0;
    int sum = 0;
    while (true) {
        for (int x = 0; x <= five_hundred_coin; x++) {
            sum_five_hundred = x * 500;
            sum = sum_five_hundred;
            if (sum > input_sum) {
                continue;
            } else if (sum == input_sum) {
                count++;
                continue;
            }
            
            for (int y = 0; y <= one_hundred_coin; y++) {
                sum_one_hundred = y * 100;
                sum = sum_five_hundred + sum_one_hundred;
                if (sum > input_sum) {
                    continue;
                } else if (sum == input_sum) {
                    count++;
                    continue;
                }
                
                for (int z = 0; z <= fifty_coin; z++) {
                    sum_fifty = z * 50;
                    sum = sum_five_hundred + sum_one_hundred + sum_fifty;
                    if (sum > input_sum) {
                        continue;
                    } else if (sum == input_sum) {
                        count++;
                        continue;
                    }
                }
            }
        }
        break;
    }
    cout << count << endl;
}