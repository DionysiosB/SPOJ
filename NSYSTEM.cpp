#include <iostream>
#include <cstring>

int convertDecimal(string input){
   int pos = 0, output = 0;
   
   pos = input.find('m');
   if(pos == 0){output += 1000;}
   else if(pos != string::npos){output += 1000 * (input[0] - '0');}

   pos = input.find('c');
   if(pos == 0 || input[pos - 1] == 'm'){output += 100;}
   else if (pos != string::npos){output += 100 * (input[pos - 1] - '0');}

   pos = input.find('x');
   if(pos == 0 || input[pos - 1] == 'm' || input[pos - 1] == 'x'){output += 10;}
   else if (pos != string::npos){output += 10 * (input[pos - 1] - '0');}

   pos = input.find('i');
   if(pos == 0 || input[pos - 1] == 'm' || input[pos-1] == 'c' || input[pos-1] =='x'){output += 1;}
   else if (pos != string::npos){output += (input[pos - 1] - '0');}
       
   return output;
}

string convertMCXI(int input){
    string output = ""; int temp = 0;

    temp = input / 1000;
    if(temp > 0){if(temp > 1){output += ('0' + temp);}; output += 'm';}
    input %= 1000;

    temp = input / 100;
    if(temp > 0){if(temp > 1){output += ('0' + temp);}; output += 'c';}
    input %= 100;

    temp = input / 10;
    if(temp > 0){if(temp > 1){output += ('0' + temp);};  output += 'x';}
    input %= 10;

    temp = input;
    if(temp > 0){if(temp > 1){output += ('0' + temp);};  output += 'i';}

    return output;
}



int main(){
    int numCases;scanf("%d\n",&numCases);
    while(numCases--){
        string temp; getline(std::cin, temp);
        int separator = temp.find(' ');
        string first = temp.substr(0,separator), second = temp.substr(separator+1);
        std::cout << convertMCXI(convertDecimal(first) + convertDecimal(second)) << std::endl;
    }
    return 0;
}
