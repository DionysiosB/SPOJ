#include <iostream>

int main(int argc, char *argv[]){
    size_t inputNumber, factor, output;
    int N; std::cin >> N;

    for(size_t k = 0; k < N ; k++){
        cin >> inputNumber;
        factor = 5, output = 0;
        while(factor <= inputNumber){
            output += inputNumber / factor;
            factor *= 5;
        }
        std::cout << output << std::endl;
    }
    return 0;
}
