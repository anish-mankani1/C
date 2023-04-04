/*wap to calculate the sum and square of natural number with the help of function(take nothing and return nothing)

*/
#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int no,i,sum=0;
    printf("enter the value" );
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    sum=sum+i*i;
    printf("%d is sum",sum);
}