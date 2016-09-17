#include <cstdio>

int main(){

    long long n; scanf("%lld\n", &n);
    puts((n&(n - 1)) == 0 ? "TAK" : "NIE");

    return 0;
}
