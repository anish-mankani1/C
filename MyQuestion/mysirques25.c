/*wap to calculate x power y.(when user input x is 2 and y is 3 then the result will be 8)

*/
#include<stdio.h>
int main()
{
    int x,y,p=1,i;
    printf("enter value of x and y");
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
    {
      p=p*x;
    }
    printf("%d",p);
    return 0;
}