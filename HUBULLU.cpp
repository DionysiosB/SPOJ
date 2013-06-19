#include <iostream>
using namespace std;

int main(){

    int numCases; scanf("%d",&numCases);
    size_t N = 0; int first = 0;
    while(numCases--){
        scanf("%zd %d\n",&N, &first);
        first ? printf("Pagfloyd wins.\n") : printf("Airborne wins.\n");
    }
    return 0;
}
