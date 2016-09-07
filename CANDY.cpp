#include <cstdio>
#include <vector>

int main(){

    while(true){
        long n; scanf("%ld\n", &n);
        if(n < 0){break;}
        std::vector<long> a(n);
        long total(0);
        for(long p = 0; p < n; p++){scanf("%ld\n", &a[p]); total += a[p];}
        if(total % n != 0){puts("-1"); continue;}
        long avg = total / n;
        long moves(0);
        for(long p = 0; p < n; p++){
            if(a[p] < avg){continue;}
            moves += a[p] - avg;
        }
        printf("%ld\n", moves);
    }

    return 0;
}
