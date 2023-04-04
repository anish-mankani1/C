/*wap to print sum of odd natural number

*/
#include<stdio.h>
int main()
{
    int i,no,sum;
    printf("enter number");
    scanf("%d",&no);
    for(i=0;i<=no;i++){
        printf(" %d",3*i);
        sum=sum+i;
    }
    printf(" %d",sum);
    return 0;
}