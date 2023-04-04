/*wap to print reverse of a number

*/
#include<stdio.h>
int main()
{
    int r=0,d,no;
    printf("enter no");
    scanf("%d",&no);
    while(no!=0)
    {
        d=no%10;
        r=(r*10)+d;
        no=no/10;
    }
    printf("%d",r);
    return 0;
}