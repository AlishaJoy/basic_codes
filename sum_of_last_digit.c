#include <stdio.h>
int main()
{
    int input1,input2;
    printf("enter two digits");
    scanf("%d%d",&input1,&input2);
     if(input1<0 )
        {
            input1 = -input1;
        }
        if(input2<0 )
        {
            input2 = -input2;
        }
        input1 = input1%10;
        input2 = input2%10;
        int res = (input1+input2);
        return printf("%d",res);
}