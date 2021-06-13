int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int i;
    int resultant_Array[] = {0,0};
    for(i = 0; i < 3; i++)
    {
        if(*(a+i) > *(b+i))
         resultant_Array[0]++;
        
        if(*(a + i) < *(b + i))
         resultant_Array[1]++;

        if(*(a + i) == *(b + i))
         continue;
    }

    int *data;
    data = malloc(sizeof(int)*2);
    for(i = 0; i < 2; i++)
     *(data + i) = resultant_Array[i];


       return data;
}