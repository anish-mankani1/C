/*wap to print n number of prime number

*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter data");
    scanf("%d",&n);
    while(n!=0)
    {
        for(i=2;i<n;i++)
        if(n%i==0)
        break;
        if(i==n)
        printf("\n%d is prime",n);
        else
        printf("\n%d is not prime",n);
        n--;
    }
    return 0;
}