/*wap to print natural number using recursion

*/
#include<stdio.h>
void add(int n);
int main()
{
     
     add(10);
    
    return 0;
}
void add(int n)
{  
    if(n>0)
   add(n-1);
   printf("%d ",n);
    
}