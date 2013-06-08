#include <iostream>
using namespace std;

int main(){
    
    double sum = 0, target;
    size_t n =0;
    while(true){
        scanf("%lf",&target);
        if(target <= 0 ){break;}
        sum = 0, n = 1;
        while(sum < target){sum += 1.0 / (++n);}
        printf("%zd card(s)\n", n-1);
    }

    return 0;
}
