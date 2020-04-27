#include<stdio.h>

void miniMaxSum(int arr_count, int* arr) {
    int i,j,minsum = 0, maxsum = 0,k = 5,temp = 0;
    for(i = 0; i < arr_count; i++)
        for(j = 0; j < arr_count - i - 1; j++)
        if(*(arr + j) > *(arr + j + 1)){
             temp = *(arr + j);
            *(arr + j) = *(arr + j + 1);
              *(arr + j + 1) = temp;
        }
     for(i = 0; i < 5; i++)
        printf(" %d",arr[i]);

        for(i = 0; i < 5; i++)      //min sum
            minsum += *(arr + i);
        for(j = arr_count - 1; j > 0; j--)    // max sum
            maxsum += *(arr + j);

        printf("%d %d",minsum,maxsum);
    }
    int main(){


        int a[] = {7, 69, 2, 221, 8974};
        miniMaxSum(5,a);
        return 0;
    }
