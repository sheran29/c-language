#include<stdio.h>
int main()
{
  char name[]={'s','h','e','r','a','n','e','v','a','n','g','e','l','i','n'};
  int count=0;
  int length=sizeof(name);
 printf("size of array:%ld",sizeof(name));
printf("\nmy name:");
 for(int i=0;i<length;i++)
   {
      printf("%c",name[i]);
   }
  for(int j=0;j<length;j++)
  {
   count++;
  }
  printf("\nlenght of my name:%d",count);
return 0;
}
