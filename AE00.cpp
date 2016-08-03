#include <cstdio>
#include <cmath>

int main(){
    int N; scanf("%d",&N);
    int output = 0;
    for(int k = 1; k <= sqrt(N); k++){output += (N / k) - k + 1;}
    printf("%d\n",output);
    return 0;
}
