#include <cstdio>

int main(){
    size_t N; scanf("%zd",&N);
    int output = N % 10;
    if(output != 0){printf("1\n%d\n",output);}
    else{printf("2\n");}
    return 0;
}
