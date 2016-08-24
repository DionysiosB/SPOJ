#include <cstdio>

int main(){
    const int numCombinations = 8;
    int t; scanf("%d\n",&t);
    string sequence = "", temp = "";
    unsigned short int index = 0; size_t dataSet = 0;

    while(t--){
        scanf("%zd\n",&dataSet); getline(cin, sequence);
        size_t counter[numCombinations] = {0};
        index = 2* (sequence[0] == 'T' ? 0:1); index += (sequence[1] == 'T' ? 0:1);
        for(size_t k = 2; k < sequence.size(); k++){index = (2* index) % 8 + (sequence[k] == 'T' ? 0 : 1); counter[index]++; }
        printf("%zd ",dataSet); for(int u = 0 ; u < numCombinations; u++){printf("%zd ", counter[u]);}; printf("\n");
    }
    return 0;
}
