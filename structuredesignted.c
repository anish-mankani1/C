/* wap to print structure designted

*/
#include<stdio.h>
struct cmp
{
    int a;
    int b;
    float c;                              //structure desigmted
    char nm[100];
};
int main()
{
    struct cmp x={.b=89,.c=79.8,.a=90,.nm="anish"};
    printf("%d %d %f %s ",x.a,x.b,x.c,x.nm);
    
    return 0;
}                                                                                                                                                                                                                                                                     