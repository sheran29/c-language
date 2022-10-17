#include<stdio.h>
#include<string.h>
int main()
{
  int i;
  char s[100];
  printf("enter the string:");
  scanf("%s",s);
 for(int i=0;s[i]!='\0';i++)
   {
    if (s[i]>='a'&&s[i]<='z')
       {
         s[i]=s[i]-32;
       }
    else
   //(s[i]>'A'&&s[i]<'Z')
     {
       s[i]=s[i]+32;
     }
  }
  printf("case string:%s",s);
return 0;
}
