/*wap to print sum of even natural number

*/
#include<stdio.h>
int main()
{
    int i,no,sum;
    printf("enter no");
    scanf("%d",&no);
    for(i=0;i<no;i++)

    {
        printf(" %d",2*i);
        sum=sum+i;
    }
    printf(" %d",sum);
    return 0;
}