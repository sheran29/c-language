#include<stdio.h>
int endian(char*num,int n);
int main()
{
  int num=0x12345;
  endian((char*)&num,sizeof(num));
  return 0;
}
 int endian(char*num,int n)
{

 for (int i=0;i<n;i++)
  {
  printf("%x",num[i]);
  }
  printf("\n");
  return 0;
}
  
