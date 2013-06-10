#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long N = 0;
    while(1){
        scanf("%ld", &N); if(N == -1){break;}
        double test = (-3 + sqrt(12 * N - 3)) / 6;
        if(test != long(test)){printf("N\n");}
        else{printf("Y\n");}
    }
    return 0;
}
