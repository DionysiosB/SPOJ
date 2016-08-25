#include <cstdio>
#include <cmath>

int main(){
    int numCases; scanf("%d\n",&numCases);
    int u = 0 , v = 0 , w = 0 , U = 0, V = 0 , W = 0;
    double a = 0 , b = 0 , c = 0 , volume = 0;
    while(numCases--){
        scanf("%d %d %d %d %d %d\n",&u, &v, &w ,&W, &V, &U);
        a = v*v + w*w - U*U; b = w*w + u*u - V*V; c = u*u + v*v - W*W;
        volume = sqrt(4.0*u*u*v*v*w*w - u*u*a*a - v*v*b*b - w*w*c*c + a*b*c)/12.0;
        printf("%.4lf\n",volume);
    }
    return 0;
}
