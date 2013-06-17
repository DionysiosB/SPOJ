#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int L = 0;
    const double PI = 4 * atan(1);
    while(1){
        scanf("%d", &L); if(L <= 0){break;}
        printf("%.2f\n", L * L /(2 *PI));
    }

    return 0;
}
