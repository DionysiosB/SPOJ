#include <cstdio>
#include <cmath>

unsigned binaryLog(unsigned long x){
    unsigned output = 0;
    while(x > 1){output++; x/=2;}
    return output;
}


int main(){
    while(true){
        string input = ""; getline(cin, input);  if(input == "00e0"){break;}
        unsigned long n = (10*(input[0]-'0') + (input[1] - '0')) * pow(10,input[3]-'0');
        unsigned long output = 1 + 2 * (n - pow(2.0, binaryLog(n))); //Numbering starts from 1 
        printf("%lu\n",output);
    }
    return 0;
}
