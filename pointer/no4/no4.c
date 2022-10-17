#include<stdio.h>
#include<string.h>
int main()
{
  int count=0;
  char*a;
  char*s[]={
            "we will teach you how to",
            "move a mountain",
             "level a building",
            "erase the past",
            "make a million",
};
int n=(sizeof s/sizeof(char*))-1;
int j=0;
    while(j<n)
     {
         a=s[j];
         for (int i=0;a[i]!='\0';i++)
          {
            if(a[i]=='e')
            count++;
          }
         j++;
     }
printf("no of 'e' present is%d",count);
return 0;
}
