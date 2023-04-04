/*wap to print function of pointer

*/
#include<stdio.h>
void swap(int*,int*);
int main()
{
   int a,b;
   printf("enterv two number");
   scanf("%d%d",&a,&b);
   swap(&a,&b);
   printf("%d%d",a,b);
  return 0;
}
void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}