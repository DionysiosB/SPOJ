#include <cstdio>
#include <cmath>
#include <vector>


bool isPrime(long x){
    int ans(true);
    for(long p = 2; p <= sqrt(x); p++){if(x % p == 0){ans = false; break;}}
    return ans;
}



int main(){

    long primeValues[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    std::vector<long> smallPrimes(primeValues, primeValues + sizeof(primeValues) / sizeof(long));

    int t; scanf("%d\n", &t);
    while(t--){
        long a, b; scanf("%ld %ld\n", &a, &b);
        if(a <= 1){a = 2;}
        for(long p = a; p <= b; p++){
            bool divisible = 0;
            for(size_t u = 0; u < smallPrimes.size(); u++){if(p > smallPrimes[u] && p % smallPrimes[u] == 0){divisible = 1; break;}}
            if(divisible || !isPrime(p)){continue;} 
            printf("%ld\n", p);
        }
        puts("");
    }

    return 0;
}
