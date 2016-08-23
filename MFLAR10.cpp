#include <cstdio>
#include <iostream>
#include <string>

int main(){
    string input = "";
    const char space = ' ';
    while(1){
        getline(cin, input);
        if(input == "" ){continue;}
        if(input == "*"){break;}
        
        size_t index = 0; while(input[index] == space){index++;}
        char start = tolower(input[index]);

        bool tautogram = 1;
        while(tautogram){
            index = input.find(space, index + 1);
            if(input[index + 1] == ' '){continue;}
            if(index == string::npos || index >= input.size() - 1){break;}
            if(tolower(input[index+1]) != start){tautogram = 0;}
        }
        tautogram ? printf("Y\n") : printf("N\n");
    }
    return 0;
}
