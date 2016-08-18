#include <cstdio>

int main(){
    size_t numCases; scanf("%zd\n",&numCases);
    while(numCases--){
        unsigned long N, K, T, F; scanf("%lu %lu %lu %lu\n",&N, &K, &T, &F);
        printf("%lu\n",F + (F - N)/(K - 1));
    }
    return 0;
}
