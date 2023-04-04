/* check whether the number are even or odd without using % modulo operator

*/
#include<stdio.h>
int main()
{
    int x,no,ev=0,odd=0;
    printf("enter  number");
    scanf("%d",&x);
    if(x&1)                      // yaha pe one 1 hi likhna hai tabhi ans aahega nahi toh nahi
    printf("%d is odd",x);        // 0 likh rahe hai toh jo pehle print karne likha hai vo print kar dera hai
    else
    printf("%d is even",x);
    return 0;
}