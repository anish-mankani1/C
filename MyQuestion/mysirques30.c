/*wap to calculate lcm of two numbers(least common multiple)

*/
#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter a number");
    scanf("%d %d",&a,&b);
    for(l=1;l<a*b;l++)
    if(l%a==0 && l%b==0)
 //  break;


    printf("%d is lcm",l);
    
    return 0;
}