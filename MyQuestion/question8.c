/* c program to check whether it is leap year or not

*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter a year");
    scanf("%d",&x);
    if(x%4)
    printf("not a leap year");
    else if(x%100)
    printf("leap year");
    else if(x%400)
    printf("leap year");
    else 
    {
        printf("not a leap year");
    }
    return 0;
}