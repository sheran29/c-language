#include<stdio.h>
int main()
{
  char n;
  printf("Enter the charcter:");
  scanf("%c",&n);
  if(n=='A'||n=='a')
   {
      printf("A for APPLE");
   }
  else if(n=='B'||n=='b')
   {
    printf("B for BAT");
   }
  else if(n=='D'||n=='d')
   {
    printf("D for DOG");
   }
  else if(n=='f'||n=='F')
   {
   printf("F for FAN");
   }
  else
    {
     printf("charactor is not in range");
    }
 return 0;
}

