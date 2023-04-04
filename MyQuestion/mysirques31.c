/*wap to calculate hcf of two number (highest common function)

*/
#include<stdio.h>
int main()
{
    int a,b,h;
   printf("enter number");
   scanf("%d %d",&a,&b);
   for(h=a<b?a:b;h>1;h--)
   if(a%h==0 && b%h==0)
  // break;
   printf("%d",h);
    return 0;
}