/* wap to print union of pointer

*/
#include<stdio.h>
union abc
{
    int a;
    char b[100]; 
    float c;
};
int main()
{
    union abc m;
    union abc *p=&m;
    m.a=1;
     m.b="anish";
   m.c=7.6;
   printf("%d %c %f",(*p).a,(*p).b,(*p).c);
    
    return 0;
}