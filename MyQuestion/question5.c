/*wap to check whether a given number disible by 5 or not

*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter no");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("divible by 5",x);
    }
    else
    {
        printf("not divisible by 5",x);
    }

    return 0;
}