#include <cstdio>

int main(){
    int numCases; scanf("%d",&numCases);
    unsigned long long output, N;
    while(numCases--){
        scanf("%lld",&N);
        output = 250*(N-1) + 192;
        printf("%lld\n", output);
    }
    return 0;
}
