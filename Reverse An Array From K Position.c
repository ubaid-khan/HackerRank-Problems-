#include<stdio.h>

int reverse(int* array,int size, int rotation){
    int temp[size],i,j;

    //copy the elements from original array
    for(i = 0; i < size; i++)
     temp[i] = array[i];

    //place the elements from k , k + 1, k + 2 ... < n in begin of temporary array
    for(i = 0, j = rotation; i < size , j <= size - 1; i++,j++)
     temp[i] = array[j];

    //place the rest of the elements in temporary array from k onwards location
    for(i = size - rotation , j = 0; i < size , j <= size; i++,j++)
     temp[i] = array[j];

    for(i = 0; i < size; i++)
     printf("%d ",temp[i]);

}

int main()
{
    int arr[] = {2,4,7,8,9}; // {8, 9, 7, 8,9}
    reverse(arr,5,1);       //logic working for k = 3
    return 0;
}
