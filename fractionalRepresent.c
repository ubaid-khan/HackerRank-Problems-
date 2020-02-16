#include<stdio.h>
#define MAX  5
void plusMinus(int arr_count, int* arr) {
    int i,pos=0,neg=0,zer=0;
    for(i = 0; i < arr_count; i++){
        if(*(arr + i) > 0)
         pos++;
        if(*(arr + i) < 0)
         neg++;
        if(*(arr + i) == 0)
         zer++;
    }
    printf(" %6f\n",(float)pos/arr_count);
    printf(" %6f\n",(float)neg/arr_count);
    printf(" %6f\n",(float)zer/arr_count);
}

int main(){
    int arr[MAX],i,size;
    printf("\nEnter number of elements you want to insert :");
    scanf("%d",&size);
    printf("\nEnter %d elements:",size);
    for(i = 0; i < size; i++)
     scanf(" %d",&arr[i]);
    plusMinus(size,arr);
    return 0;
}
