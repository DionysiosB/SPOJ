#include <iostream>
#include <vector>

const int N = 26;

int main(){

    while(true){
        std::string s; std::cin >> s;
        if(s == "0"){break;}
        std::vector<int64_t> count(s.size() + 1, 0);
        count[0] = count[1] = 1;
        for(int p = 2; p < count.size(); p++){
            int current = s[p - 1] - '0';
            int prev = 10 * (s[p - 2] - '0') + current;
            count[p] = count[p - 1] * (current > 0) + count[p - 2] * (prev >= 10 && prev <= N);
        }

        std::cout << count.back() << std::endl;
    }

    return 0;
}
