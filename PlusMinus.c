// Complete the plusMinus function below.
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