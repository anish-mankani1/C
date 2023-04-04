/*

*/
#include<stdio.h>
int main()
{
    int a=0,b=0;
    int i;
    char x[10]="0";
    printf("enter data");
    fgets(x,10,stdin);
    for(i=0;x[i];i++)
    {
        if(x[i]>='a' &&x[i]<='z' || x[i]>='A' &&x[i]<='Z')
        a=1;
        if(x[i]>='0' &&x[i]<='9')
        b=1;

    } 
    if(a==1 && b==1)
    printf("%s is alphanumeric",x);
    else
    printf("%s is not numeric",x);
    return 0;
}