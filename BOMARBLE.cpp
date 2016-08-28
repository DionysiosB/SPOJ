#include <cstdio>

int main(){
    unsigned n;
    while(1){
        scanf("%u\n",&n); if(!n){break;}
        unsigned long output = (n + 1) * (3*n + 2) / 2;
        printf("%lu\n",output);
    }
    return 0;
}
