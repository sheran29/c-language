#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul,mod;
	float div;
	printf("enter 2 no's:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=(float)a/b;
	mod=a%b;
	printf("sum of %d and %d :%d",a,b,sum);
	printf("\nsub of %d and %d:%d",a,b,sub);
	printf("\nmul of %d and %d:%d",a,b,mul);
	printf("\ndiv of %d and %d:%f",a,b,div);
	printf("\nmod of %d and %d:%d",a,b,mod);
	return 0;
}
