/*wap to print prime number between two given number

*/
#include<stdio.h>
int main()
{
    int a,b,i,x;
    printf("enter number");
    scanf("%d %d",&a,&b);
    for(x=a;x<b;x++)
    {
    for(i=2;i<x;i++)
    if(x%i==0)
    break;
       if(i==x)

    printf(" %d",x );
    }
    
    return 0;
}