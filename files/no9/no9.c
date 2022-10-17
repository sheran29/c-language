#include<stdio.h>
#define mi 2.54
#define fi 12
int main()
{
  float cm;
  int inch,feet;
  printf("enter the centimeter:");
  scanf("%f",&cm);
  inch=(int)cm/mi;
  feet=inch/fi;
  printf("\n%f centimeter is %dfeet\t%dinches",cm,feet,inch);
 return 0;
}
