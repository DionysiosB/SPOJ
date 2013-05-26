#include <iostream>
using namespace std;

int main(){
    size_t N; scanf("%zd",&N);
    size_t x, y;
    for(size_t k = 0; k < N ; k++){
       scanf("%zd %zd", &x , &y);
       if(x == y){printf("%zd\n",(2 * x - x % 2) );}
       else if( x == y + 2){printf("%zd\n",(x + y - x % 2) );} 
       else{printf("No Number\n");continue;}
    }
    return 0;
}
