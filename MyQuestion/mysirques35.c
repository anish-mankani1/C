/*wap to calculate factorial with the help of function (take something and return nothing)

*/
#include<stdio.h>
int add(int);
int main()
{
    int s;
    int y;
    printf("enter number");
    scanf("%d",&y);
    s=add(y);
    printf("%d",s);

    
    return 0;
}
int  add(int a)
{
    int f=1,i;
    for(i=1;i<=a;i++)
    f=f*i;
  
    
    return f;
}