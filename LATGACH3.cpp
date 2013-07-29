#include <iostream>
using namespace std;

int main(){

    const int maxNum = 30;
    unsigned long f[maxNum + 1] = {0};
    unsigned long g[maxNum + 1] = {0};
    
    f[0] = 1; f[1] = 0; g[0] = 0; g[1] = 1;
    for(int n = 2; n <= maxNum ; n++){
        f[n] = f[n-2] + 2*g[n-1];
        g[n] = f[n-1] +   g[n-2];
    }

    while(1){
        int p; scanf("%d\n",&p); if(p == -1){break;}
        printf("%lu\n", p%2 ? 0 : f[p]);
    }
    return 0;
}
