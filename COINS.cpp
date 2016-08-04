#include <cstdio>
#include <map>

map<unsigned long long, unsigned long long> byteValue;

unsigned long long maxExchange(unsigned long long input){
    if(input == 0){return 0;}
    unsigned long long output = byteValue[input];
    if(!output){output =  max(input, maxExchange(input/4) + maxExchange(input/3) + maxExchange(input/2)); byteValue[input] = output;}
    return output;
}


int main(){
    unsigned long long coin = 0;
    while( scanf("%llu\n",&coin) == 1){printf("%llu\n",maxExchange(coin));}
    return 0;
}
