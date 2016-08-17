include <cstdio>
#include <set>

unsigned long transform(unsigned long input){
    unsigned long output = 0, lastDigit = 0;
    while(input > 0){
        lastDigit = input % 10;
        output += lastDigit * lastDigit;
        input /= 10;}
    return output;
}

int main(){

    unsigned long n(0), count(0);
    set<unsigned long> numberSet;

    scanf("%lu\n", &n);
    do{ 
        numberSet.insert(n);
        n = transform(n); count++ ;
        if(n == 1){break;}
    }while(numberSet.find(n) == numberSet.end());

    if(n==1){printf("%lu\n",count);}
    else{printf("-1");}

    return 0;
}
