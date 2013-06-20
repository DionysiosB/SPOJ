#include <iostream>
using namespace std;

int main(){

    int numCases;scanf("%d\n",&numCases);
    while(numCases--){
        long long f = 0, g = 0, h = 0; scanf("%lld %lld %lld", &f, &g, &h);
        
        long long n = 2 * h / (f + g);
        long long x = (g - f)/(n - 5);
        long long a = f - 2 * x;
        
        printf("%lld\n",n);
        for(long long k = 0; k < n; k++){printf("%lld ", a + k * x);}
        printf("\n");
    }
    return 0;
}
