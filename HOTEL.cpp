#include <iostream>
using namespace std;

int main(){

    int t; scanf("%d",&t);
    int firstArrival, lastDeparture, numGuests, count = 0, maxCount = 0;
    while(t--){
        scanf("%d",&numGuests);
        int *arrivals = new int[numGuests];
        int *departures = new int[numGuests];
        
        firstArrival = 1000;lastDeparture = 0;
        
        for(int k = 0; k < numGuests ; k++){
            scanf("%d",(arrivals+k));
            firstArrival = min(firstArrival,arrivals[k]);
        }
        
        for(int k = 0; k < numGuests ; k++){
            scanf("%d",(departures+k));
            lastDeparture = max(lastDeparture, departures[k]);
        }

        maxCount = 0;
        for(int n = firstArrival; n <= lastDeparture ; n++){
            count = 0;
            for(int k = 0; k < numGuests ; k++){if( n >= arrivals[k] && n < departures[k]){count++;}}
            if(count > maxCount){maxCount = count;}
        }
        printf("%d\n",maxCount);

    }
    return 0;
}
