#include <cstdio>

int main(){

    long long t; scanf("%lld\n", &t);
    while(t--){
        long long n; scanf("%lld\n", &n);
        long long total(0);
        for(long long p = 0; p < n; p++){
            long long x; scanf("%lld\n", &x);
            total += x; total %= n;
        }

        puts((total == 0) ? "YES" : "NO");
    }

    return 0;
}
