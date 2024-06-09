//return the last digit of the number as positive
#include <stdio.h>

int main()
{
    int n,res;
    printf("enter the value for n");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    res = n%10;
    return printf("%d",res);

}