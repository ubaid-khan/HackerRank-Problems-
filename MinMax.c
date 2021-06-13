//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
//Then print the respective minimum and maximum values as a single line of two space-separated long integers.
void miniMaxSum(int arr_count, int *arr){
 long long int i,j,minsum = 0, maxsum = 0,k = 5,temp = 0;
    for(i = 0; i < arr_count; i++)
        for(j = 0; j < arr_count - i - 1; j++)
        if(*(arr + j) > *(arr + j + 1)){
             temp = *(arr + j);
            *(arr + j) = *(arr + j + 1);
              *(arr + j + 1) = temp;
        }
        for(i = 0; i < 4; i++)      //min sum
            minsum += *(arr + i);
        for(j = arr_count - 1; j >= (arr_count - 4); j--)    // max sum
            maxsum += *(arr + j);
        
        printf("%lli %lli",minsum,maxsum);
    }