#include<stdio.h>
#define MAX 10
int birthdayCakeCandles(int ar_count, int* ar) {
    long long int maxelem = *(ar + 0),i;
    int counter = 0;
        for(i = 0; i < ar_count; i++)
               if(*(ar + i) > maxelem)
                   maxelem = *(ar + i);
         for(i = 0; i < ar_count; i++)
            if(*(ar + i) == maxelem)
                counter++;
    return counter;
}
int main(){
    int ar[MAX],size,i;
    printf("\nEnter size of array:");
    scanf("%d",&size);
    printf("\nEnter array elements :");
    for(i = 0; i < size; i++)
        scanf("%d",&ar[i]);
    printf("\nNumber of Candles that can be blown by your niece is : %d",birthdayCakeCandles(size,ar));
    return 0;
}
