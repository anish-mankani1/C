/*wap to check even or odd without using % modulo and bitwise operator

*/
#include<stdio.h>
int main()
{
    int x,ev=0,od=0;
    printf("enter no");
    scanf("%d",&x);
    if(x/2*2==x)
    printf("even");
    else 
    {
      printf("odd");
    }
    return 0;
}