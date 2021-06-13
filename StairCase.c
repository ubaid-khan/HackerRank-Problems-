// Complete the staircase function below.
//Print a staircase of size n using # symbols and spaces.
//Note: The last line must have 0 spaces in it.
void staircase(int n) {
        for(int i = 1; i <= n; i++){
            for(int j = i; j < n; j++){
                printf(" ");
            }
            for(int k = 1; k <= i; k++){
                printf("#");
            }
            printf("\n");
        }
  }