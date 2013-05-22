#include <iostream>
using namespace std;

size_t reverseNumber(size_t n){
    
    size_t digit = 0, output = 0;
    while(n > 0){
        digit = n % 10;
        n /= 10;
        output = 10*output + digit;
    }
    return output;
}

int main(){

    size_t N; scanf("%zd",&N);
    
    size_t first, second, result;
    for(size_t k = 0; k < N ; k++){
        scanf("%zd %zd", &first , &second);
        result = reverseNumber(reverseNumber(first) + reverseNumber(second));
        printf("%zd\n",result);
    }
    return 0;
}
