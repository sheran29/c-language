#include<stdio.h>
#include<string.h>
void inde(char*s,char*a);
int main()
{
  char s1[10];
  char s2[10];
  printf("enter the string:");
  scanf("%s",s1);
  printf("enter the string:");
  scanf("%s",s2);
  inde(s1,s2);
 return 0;
}
void inde(char *s,char *a)
{
  for(int i=0;i<strlen(s);i++)
   {
     for(int j=0;j<strlen(a);j++)
      {
         if(s[i]==a[j])
         {
          printf("\nposition of index:%d",i);
         }
      }
   }
}
