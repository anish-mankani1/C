/*

*/
#include<stdio.h>
struct date
{
    int d,m,y;
};
struct date inputdate(); // input date isliye aaya kyuki hum function aur structure dono kar rahe hai
int main()
{
   struct date x;
   x=inputdate();
   printf("%d-%d-%d",x.d,x.m,x.y);
     return 0;
}
struct date inputdate()  //  jaise hum int lete hai toh upar bhi likhte hai    yeh take nothing return something type hai
{
    struct date somedate;
    printf("enter data");
    scanf("%d/%d/%d/",&somedate.d,&somedate.m,&somedate.y);
    return somedate;

}