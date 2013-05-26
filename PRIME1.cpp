#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    size_t N; scanf("%zd",&N);

    for(size_t k = 0; k < N ; k++){

        size_t lowerBound, upperBound;
        scanf("%zd %zd", &lowerBound , &upperBound);
        bool *primes = new bool[upperBound-lowerBound+1];

        primes[0] = 0; primes[1] = 0;
        for(size_t m = lowerBound; m <= upperBound ; m++){primes[m - lowerBound] = 1;}
        for(size_t m = lowerBound; m <= upperBound ; m++){
            for(size_t u = 2; u < m ; u++){
                if( m % u == 0){primes[m-lowerBound] = 0; break;}
            }
        }

        for(size_t m = lowerBound ; m <= upperBound ; m++){if(primes[m - lowerBound]){printf("%zd\n",m);}}
        printf("\n");

    }
    return 0;
}
