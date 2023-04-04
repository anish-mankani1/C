/*wap to print natural number using reverse order

*/
#include<stdio.h>
int main()
{
    int no;
    printf("enter no");
    scanf("%d",&no);
    while(no!=0)
    {
        printf(" %d",no);
        no--;
    }
    return 0;
}