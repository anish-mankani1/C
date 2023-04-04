/*wap to count digit 

*/
#include<stdio.h>
int main()
{
    int x,count=0;
    printf("enetr number");
    scanf("%d",&x);
    while(x!=0)
    {
       x=x/10;
       count++;
    }
    printf("%d",count);
    
    return 0;
}