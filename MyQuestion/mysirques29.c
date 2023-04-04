/*wap to print armstrong of a number

*/
#include<stdio.h>
int main()
{
    int s=0,d,on,no;
    printf("enter no");
    scanf("%d",&no);
    on=no;
    while(no!=0)
    {
        d=no%10;
        s=s+(d*d*d);
        no=no/10;
    }
    printf("\n%d is sum",s);
    if(on==s)
    printf("\n%d is armstrong",s);
    else
    printf("\n%d is not armstrong",s);
    return 0;
}