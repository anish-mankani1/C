/*

*/
#include<stdio.h>
int main()
{
    int se=0,so=0,no[10];
    int i;
    printf("enter 10 number");
    scanf("%d",&no[i]);
    for(i=0;i<=9;i++)
    {
        if(no[i]%2==0)
        {
            se=se+no[i];

        }
        else
        {
            so=so+no[i];
        }
         printf("%d is se",se);
        printf("%d is so",so);
    }
   
    return 0;
}