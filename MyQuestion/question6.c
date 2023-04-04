/* wap to check greatest number between two number

*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter no");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("x is gretest",x);
    else
    {
        printf("y is greatest",y);
    }
    return 0;
}