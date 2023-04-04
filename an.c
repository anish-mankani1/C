/*

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char c='a';
    fp=fopen("abc.txt","w");
      if(fp==NULL)
      {
        printf("error");
        exit(1);
      }
       fputc(c,fp);
      fclose(fp);

    
    return 0;
}