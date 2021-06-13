//You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. 
//They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
// Complete the birthdayCakeCandles function below.
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