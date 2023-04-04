/*wap to calculate sum of the digit

*/
#include<stdio.h>
int main()
{
    int no,d,sum=0;
    printf("enter no");
    scanf("%d",&no);
    while(no!=0)
    {
        d=no%10;
        sum=sum+d;
        no=no/10;
    }
    printf("%d",sum);
    return 0;
}