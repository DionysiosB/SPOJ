#include <cstdio>
#include <cmath>

int main(){
    int numCases; scanf("%d\n",&numCases);
    while(numCases--){
        double V; scanf("%lf",&V);
        printf("%.10f\n", 3 * sqrt(3) * pow( 2 * V * V, 1.0/3.0));
    }
    return 0;
}
