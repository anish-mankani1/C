/*wap to print prime factor of number

*/
#include<stdio.h>
int main()
{
    int i,x;
    printf("enter number");
    scanf("%d",&x);
    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
        printf("%d ",i);
        x=x/i;
    }
    }
    return 0;
}