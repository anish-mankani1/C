/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE*fp=NULL;
    char ch[100];
    fp=fopen("abc.text","a");
   if(fp=NULL)
   {
    printf("error");
    exit(1);
   }
   printf("enter the sting you want");
   gets(ch);
   fputs(ch,fp);
   fclose(fp);
    
    return 0;
}