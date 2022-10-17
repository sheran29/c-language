#include<stdio.h>
int s();
int a=20;
int main()
{
  printf("\nstatic value s :%d",s());
  printf("\nstatic value have a life time scope:%d",s());
  return 0;
}
  int s()
  {
    static int s=10;
    extern int a;
    a+=s;
    s++;
    printf("\nextern value :%d",a);
     return s;
  }

