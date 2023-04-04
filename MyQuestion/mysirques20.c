/*wap to print sum of n natural number

*/
#include<stdio.h>
int main()
{
    int i,no,sum=0;
    printf("enter number");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {    printf(" %d",i);
        sum=sum+i;
       
    }
     printf(" %d",sum);
    return 0;
}