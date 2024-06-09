//sum of two numbers is it even or odd
#include <stdio.h>

int main()
{
    int a,b,res;
    printf("enter the values foe a and b");
    scanf("%d%d",&a,&b);
    res = a+b;
    (res%2==0)?printf("the sum is %d that is even",res) : printf("the sum %d is odd",res);
    return(0);
}