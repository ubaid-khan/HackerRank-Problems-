int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i,j,FD_SUM=0,RD_SUM=0,final_result=0;

    for(i = 0; i < arr_rows; i++){
        for(j = 0; j < arr_columns; j++){
            if(i == j)
                FD_SUM += *(*(arr + i)+j);
        }
    }
            for(i = arr_rows-1,j=0; i >= 0; i--,j++){
                RD_SUM += *(*(arr +i)+j);
            }

          final_result = FD_SUM - RD_SUM;  
    return abs(final_result);
}