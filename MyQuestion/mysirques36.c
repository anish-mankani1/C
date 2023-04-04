/*wap to calculate the sum of n natural number with the help of function (take nothing and return nothing)

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
    int n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    sum=sum+i;
    printf("%d",sum);
}