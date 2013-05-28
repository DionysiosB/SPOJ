#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int numCases; scanf("%d",&numCases);
    int N, score;

    while(numCases--){
        scanf("%d",&N);

        int *men = new int[N];
        int *women = new int[N];
        for(int k = 0 ; k < N ; k++){scanf("%d",(men+k));}
        for(int k = 0 ; k < N ; k++){scanf("%d",(women+k));}

        sort(men, men + N); sort(women, women + N);

        score = 0;
        for(int k = 0 ; k < N ; k++){score += men[k] * women[k];}
        printf("%d\n",score);
    }

    return 0;
}
