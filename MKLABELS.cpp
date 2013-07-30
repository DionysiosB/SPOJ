#include <iostream>
using namespace std;

unsigned long long nonIsomorphicTrees(int N){
    unsigned long long output = 1;
    for(int k = 0; k < N - 2; k++){output *= N;}
    return output;
}


int main(){
    int testCase = 0, numVertices = 0;
    while(1){
        scanf("%d\n",&numVertices);
        if(!numVertices){break;}
        printf("Case %d, N = %d, # of different labelings = %llu\n", ++testCase , numVertices , nonIsomorphicTrees(numVertices) );
    }
    return 0;
}
