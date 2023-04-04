/*wap to print table of user choice

*/
#include<stdio.h>
int main()
{
    int i,no;
    printf("enter the table number you want");
    scanf("%d",&no);
    for(i=1;i<10;i++)
    {
        printf("\n%d*%d=%d",no,i,no*i);
    }
    
    return 0;
}