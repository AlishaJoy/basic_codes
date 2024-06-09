//return the second last digit as positive , if input is single digit return -1
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
    if(n/10<1)
    {
        res = -1;
    }
    else{
        n = n/10;
        res = n%10;
    }
    return printf("%d",res);

}