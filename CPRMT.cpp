#include <iostream>
using namespace std;

int main(){
    const int alphabetSize = 26;
    while(true){
        string first = "", second = "";
        int countFirst[alphabetSize] = {0}, countSecond[alphabetSize] = {0};
        if(!getline(cin, first) || !getline(cin,second)){break;}
        for(int k = 0; k < first.size() ; k++){countFirst[first[k] - 'a']++;}
        for(int k = 0; k < second.size(); k++){countSecond[second[k] - 'a']++;}
        for(int k = 0; k < alphabetSize ; k++){for(int m = 0; m < min(countFirst[k], countSecond[k]); m++){printf("%c",'a'+k);};};printf("\n");
    }
    return 0;
}
