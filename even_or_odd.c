#include <stdio.h>
//check if odd or even
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    (n%2==0)?printf(" %d is even",n):printf("odd");
    
    return(0);
}