#include<stdio.h>
#include<string.h>
char del(char str[],char str2[]);
char del(char str[],char str2[])
{
  int i,j;
  int n=strlen(str);
  int m=strlen(str2);
  for(i=0;i<m;++i)
     {
        for(j=0;j<n;j++)

            if(str2[i]==str[j])
          {
               str2[i]=str2[i+1];
               for(int k=i+1;k<m;++k)
                str2[k]=str2[k+1];
          }
     }
}
int main()
{
   char str[]="rain";
   char str2[]="more";
   del(str,str2);
   puts(str);
   puts(str2);
  return 0;
}
