#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numCases;scanf("%d\n",&numCases);
    double a = 0, b = 0, c = 0, output = 0;
    while(numCases--){
        scanf("%lf %lf %lf\n",&a, &b, &c);
        output = (a * b * c) / (a*b + b*c + c*a + 2*sqrt(a*b*c*(a+b+c)));
        printf("%.6lf\n",output);
    }
    return 0;
}
