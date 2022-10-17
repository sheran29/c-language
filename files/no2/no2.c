#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp1,*fp2;
  char c;
   int flag=0;
   fp1=fopen("s.txt","r");
   fp2=fopen("s1.txt","w");
   if(fp1==NULL)
   {
     perror("error");
     return -1;
   }
   while((c=fgetc(fp1))!=EOF)
   {
     if((c=='/')&&(flag==0))
     {
       flag=1;
       continue;
     }
     else if((c=='/')&&(flag==1))
     {
       flag=2;
       continue;
     }
     else if((c=='/')&&(flag==1))
     {
       flag=3;
       continue;
     }
     if(flag==2)
     {
       if(c=='\n')
        flag=0;
     }
     if(flag==3)
     {
       if(c=='*')
        flag=4;
     }
     if(flag==4)
     {
       if(c=='/')
        flag=0;
     }
      if(flag==0)
     {
       if((c=='/')||(c==10))
       continue;
       fputs(c,fp2);
      }
     if(fp2==NULL)
      {
        perror("erroe");
        return -1;
      }
while(c=fgetc(fp2)!=EOF)
   {
     printf("%c",c);
    }
 fclose(fp1);
 fclose(fp2);
 return 0;
}
     }
