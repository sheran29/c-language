#include<stdio.h>
int main()
{
   char ch[20];
   FILE *fp;
   fp=fopen("s.txt","r");
   if(fp==NULL)
    {
      perror("error");
      return -1;
     }
   while(fgets(ch,20,fp)!=NULL)
   {
//     fprintf(stdout,"%s",ch);
     fputs(ch,stdout);
    }
   fclose(fp);
}
