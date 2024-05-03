#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;
    int a;
    std::vector<int> A;
    for (int i = 0; i < N; i++)
    {
        std::cin >> a;
        A.push_back(a);
        while(true){
            if(A.size() <= 1){
                break;
            }

            int back1 = A.back();
            int back2 = A.end()[-2];

            if(back1 != back2){
                break;
            }

            if(back1 == back2){
                A.pop_back();
                A.pop_back();
                A.push_back(back1 + 1);
            }
        }
    }

    std::cout << A.size() << std::endl;
    
    return 0;
}