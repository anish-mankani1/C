/*wap to print n odd natural number

*/
#include<stdio.h>
int main()
{
    int i,no;
    printf("enter the number you want");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    printf(" %d",3*i);
    return 0;
}