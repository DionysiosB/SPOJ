#include <iostream>
using namespace std;

int main(){
    
    int numCases; scanf("%d\n",&numCases);
    while(numCases--){
        int numRows = 0, numCols = 0, temp = 0;
        size_t currentMax = 0;
        
        scanf("%d %d\n",&numRows, &numCols);
        size_t *state = new size_t[numCols];
        
        for(int col = 0; col < numCols; col++){scanf("%zd",state+col);}
        for(int row = 1; row < numRows; row++){
            state[0] = max(state[0],state[1]); state[numCols - 1] = max(state[numCols - 2],state[numCols - 1]);
            for(int col = numCols - 2; col > 0; col--){state[col] = max(state[col - 1],  max(state[col],state[col + 1]));}
            for(int col = 0; col < numCols; col++){scanf("%d",&temp); state[col] += temp;}
        }

        for(int col = 0; col < numCols; col++){currentMax = max(currentMax, state[col]);}
        printf("%zd\n", currentMax);
    }

    return 0;
}
