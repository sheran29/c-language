#include<stdio.h>
void main()
{
	int a,b,c,i,j;
	printf("enter the starting number=");
	scanf("%d",&a);
	printf("\nenter the end number=");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		printf("\n%d",i);
	}
	printf("\n");
	printf("\n enter the which number you want to remove=");
	scanf("%d",&c);
	for(j=a;j<=b;j++)
	{
		if(j==c)
		{
			printf("found the number");
			break;
		}
	}
}
