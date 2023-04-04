#include<stdio.h>
int main()
{
 int unit,totalunit;
 printf("enter the unit");
 scanf("%d",&unit);
 if(unit<=50)
 {
    totalunit=unit*1;-9
    
    printf("%d",totalunit);
 }
 else if(unit<=150)
 {
    totalunit=unit*1.25;
    printf("%d",totalunit);
 }
 else if(unit<=250)
 {
    totalunit=unit*1.75;
     printf("%d",totalunit);
 }
}
