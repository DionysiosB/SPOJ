#include<cstdio>

int main(){

    while(true){
        long a, b, c; scanf("%ld %ld %ld\n", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0){break;}
        if(2 * b == a + c){printf("AP %ld\n", c + (b - a));}
        else if(b * b == a * c){printf("GP %ld\n", c * c / b);}
    }

    return 0;
}
