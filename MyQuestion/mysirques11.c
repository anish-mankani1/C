/*wap to print n natural number without using reverse order

*/
#include<stdio.h>
int main()
{
    int a=1,no;
    printf("enter number");
    scanf("%d",&no);
    for(a=1;a<no;a++)
    printf(" %d",a);
    return 0;
}