//print numbers from 100 to 1 skipping two digits in between ...100,97,94....7,4,1

#include <stdio.h>
int main()
{
    for(int i=100;i>0;i=i-3)
    {
        printf("%d \t",i);
    }
    return (0);
}