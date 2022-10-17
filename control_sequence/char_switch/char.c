#include<stdio.h>
int main()
{
   char n;
   printf("enter the value:");
   scanf("%c",&n);
   switch(n)
   {
    case 'a': printf("A for APPLE");
              break;
    case 'A': printf("A for APPLE");
              break;
    case 'b': printf("B for bat");
              break;
    case 'B':printf("B for BAT");
             break;
    case 'd':printf("D for DOG");
             break;
    case 'D':printf("D for DOG");
             break;
    case 'f':printf("F for FAN");
             break;

    case 'F':printf("F for FAN");
             break;
   default : printf("character not in range");
             break;
   }
  return 0;
}
