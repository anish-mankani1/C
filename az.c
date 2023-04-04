/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    char c[100];
    int i;
    int a=10;
    char ch='a';
    fp=fopen("aq.text","w");
    if(fp==NULL)

    {
        printf("error");
        exit(1);
    }
    printf("enter the string");
    gets(c);
    fprintf(fp,"%d %c %s",a,ch,c);
    //fputs(c,fp);
   // for(i=0;i!=strlen(c);i++)
    //fputc(c[i],fp);
    fclose(fp);
    
    return 0;
}