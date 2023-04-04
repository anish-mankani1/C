/*wap to print factorial using recursion

*/
#include<stdio.h>
int add(int k);
int main()
{
    
    printf("%d",add(5));
    return 0;
}
 int add(int n)
 {
   if(n>0)
   return(n*add(n-1));
   else
   return(1);
   

 }