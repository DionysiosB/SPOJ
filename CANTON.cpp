#include <cstdio>
#include <cmath>

int main(){
    
    int t; scanf("%d",&t);
    size_t k = 0, N = 0, a = 0;
    while(t--){
        scanf("%zd",&N);
        k = floor((-1+sqrt(-1+8*N))/2);
        a = N - k*(k+1)/2;
        if(k&1){printf("TERM %zd IS %zd/%zd\n", N, a, k+2-a);}
        else{printf("TERM %zd IS %zd/%zd\n", N, k+2-a, a);}
    }

    return 0;
}
