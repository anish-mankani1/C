/*wap to print prime number

*/
#include<stdio.h>
int main()
{
    int i,x;
    printf("enter number");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    if(x%i==0)
    break;
    if(i==x)
    {
        printf("prime number",x);
    }
    else
    {
        printf("not a prime number");
    }

    
    return 0;
}