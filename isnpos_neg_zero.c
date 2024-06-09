//check if n is positive,negative or zero
#include <stdio.h>

int main()
{
    int n ;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The value of n is zero");
    }
    else if(n>0)
    {
        printf("n %d is positive",n);
    }
    else
    {
        printf("n %d is negative",n);
    }
    return (0);
}