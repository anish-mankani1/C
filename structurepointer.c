/* wap to print structure of pointer

*/
#include<stdio.h>
struct sk
{
    int sal;
    char nm[100];
    char jb[100];

};
int main()
{
    struct sk c={100,"anish","ca"};
 //   struct sk m;
    struct sk *p=&c;
   // m=c;
    printf("%d %s %s",(*p).sal,(*p).nm,(*p).jb);
 //   printf("%d %s %s",m.sal,m.nm,m.jb);
    
    return 0;
}