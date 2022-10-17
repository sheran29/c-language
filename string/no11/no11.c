#include<stdio.h>
#include<string.h>
int main()
{
  char str[]="space";
  int i,n,j;
  char *s;
  n=strlen(str);
  for(i=0;i<n;i++)
   {
     s=&str[i];
     for(j=0;j<n;j++)
      {
         printf("%c",*s);
         s++;
         if(*s=='\0')
         {
             s=str;
         }
      }
         printf("\t");
   }
return 0;
}
