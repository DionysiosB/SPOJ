#include <iostream>
using namespace std;

int main(){
    
    int capacity, numItems; scanf("%d %d\n", &capacity, &numItems);
    int *sizes  = new int[numItems];
    int *values = new int[numItems]; 
    for(int k = 0; k < numItems; k++){scanf("%d %d\n", sizes + k, values + k);}
    
    int *matrix = new int[numItems * capacity];
    for(int k = 0; k < numItems * capacity; k++){matrix[k] = 0;}

    for(int currentItem = 0; currentItem < numItems; currentItem++){
        for(int currentCap = 0; currentCap <=capacity; currentCap++){
            if(sizes[currentItem] <= currentCap){
                matrix[capacity * currentItem + currentCap] = max( matrix[capacity * (currentItem - 1) + 

        }
    }





    return 0;
}
