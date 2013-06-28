#include <iostream>
using namespace std;

int main(){
    unsigned numCases = 0; scanf("%u\n",&numCases);
    for(int testCase = 1; testCase <= numCases; testCase++){
        unsigned long long r = 0; scanf("%llu\n", &r);
        printf("Case %u: %.2f\n",testCase, 0.25 + 4 * r * r);
    }
    return 0;
}
