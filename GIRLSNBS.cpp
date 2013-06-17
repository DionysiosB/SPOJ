#include <iostream>
using namespace std;

int main(){

    int boys = 0, girls = 0, maxNum = 0, minNum = 0;

    while(1){
        scanf("%d %d", &girls, &boys); 
        if(boys < 0 || girls < 0){break;}
        if(boys >= girls){maxNum = boys; minNum = girls;}
        else{maxNum = girls; minNum = boys;}
        int minReg = maxNum / (minNum + 1);
        if( maxNum > minReg * (minNum + 1)){minReg++;}
        printf("%d\n", minReg);
    }
    return 0;
}
