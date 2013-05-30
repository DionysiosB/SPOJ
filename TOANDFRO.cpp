#include <iostream>
using namespace std;

int main(){

    int numCols = 0, index = 0, offset = 0;
    string message;
    while(true){
        scanf("%d\n",&numCols);
        if(numCols == 0){break;}
        getline(cin,message,'\n');

        for(int col = 0; col < numCols ; col++){
            index = col;
            offset = 2 * (numCols - col) - 1;
            while(index < message.size() ){
                printf("%c",message[index]);
                index += offset;
                offset = 2*numCols - offset;
            }
        }
        printf("\n");
    }

    return 0;
}
