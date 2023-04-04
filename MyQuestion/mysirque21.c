/*wap to print factorial of number

*/
#include<stdio.h>
int main()
{
    int i,no,f=1;
    printf("enter no");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    f=f*i;
    printf("%d",f);
    return 0;
}