/* wap to chect greatest between three number

*/
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter value of three number");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && y>z)
    printf("x is greatest",x);
    else if (y>z)
    printf("y is gretest",y);
    else
    {
        printf("z is greatest",z);
    }
    return 0;
}