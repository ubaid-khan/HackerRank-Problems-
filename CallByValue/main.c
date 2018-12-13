#include <stdio.h>
#include <stdlib.h>

int inc(int);
void incr(int *);

int main()
{
    int n=10;
    printf("\nValue of n in main :%d",inc(n));
   // inc(n);
    printf("\nValue of n after call by value :%d",n);
    incr(&n);
    printf("\nValue of n after call by reference :%d",n);
    return 0;
}
int inc(int n){
    n++;
    return(n);
}
void incr(int *n){
    *n=*n+1;
}
