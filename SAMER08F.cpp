#include <iostream>
using namespace std;

int main(){

    size_t N;
    while(true){
        scanf("%zd",&N);
        if(N <= 0){break;}
        printf("%zd\n", N * (N + 1) * (2*N + 1)/6);
    }

    return 0;
}
