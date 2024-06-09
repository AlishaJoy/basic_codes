#include <stdio.h>
//find greatest of two numbers
int main()
{
    int a,b,res;
    printf("ente rthe values of a and b");
    scanf("%d%d",&a,&b);
    res =(a>b)?a:b;  
    printf("%d is greater",res);
    return (0);
}