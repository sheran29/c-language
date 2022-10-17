#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int lower(char *s);
int lower(char *s)
{
   for(int i=0;i<=(strlen(s));i++)
   {
     if(s[i]>=65&&s[i]<=90)
      {
       s[i]=s[i]+32;
      }
     else if(s[i]>=97&&s[i]<=122)
      {
       s[i]=s[i]-32;
      }
    }
  printf("lower case:%s",s);
  return 0;
}

int main()
{
  char str[50];
  printf("enter the character to be lower:");
  scanf("%s",str);
  lower(str);
return 0;
}
