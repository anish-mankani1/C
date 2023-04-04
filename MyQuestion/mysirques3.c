/*

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a and b");    // a=20, b=10
    scanf("%d %d",&a,&b);
    a=a+b;                         // a=30   b=10
    b=a-b;                            // a=30         b=20 
    a=a-b;                             // a=10   b=20
   printf("%d %d",a,b);

    return 0;
}