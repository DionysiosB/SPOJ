#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    size_t N; scanf("%zd",&N);
    size_t input;
    double output;

    for(size_t k = 0; k < N ; k++){

        scanf("%zd",&input);
        output = 0;
        for(size_t n = 1; n <= input ; n++){ output += 1.0 / n; }
        output *= input;
        printf("%.2f\n",output);
    }

    return 0;
}
