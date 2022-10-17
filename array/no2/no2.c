#include<stdio.h>
#include<string.h>
int main()
{
  int tap=0,blank=0,newline=0,ch=0,count=0;
  char text[50];
  printf("enter the elements:");
   for(int i;(i=getchar())!='*';)
    {
     if(i==' ')
     {
       blank++;
     }
    if(i=='\t')
      {
         tap++;
      }
     if(i=='\n')
      {
         newline++;
      }
    if(i>='a'&&i<='z'||i>='A'&&i<='z')
     {
      ch++;
     }
    else if(i>='0'&&i<='99')
        {
           count++;
        }
    }

  printf("\nno.of blank:%d",blank);
  printf("\nno of tap:%d",tap);
  printf("\nno of newline:%d",newline);
  printf("\nno of character:%d",ch);
  printf("\nno of digits:%d",count);
return 0;
}
