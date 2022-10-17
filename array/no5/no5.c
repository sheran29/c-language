#include<stdio.h>

int main()
{
        int i,n;
	int arr[n];
	int s=0,j,avg;
        printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter array:");
	for(i=0;i<n;i++)
    	 {
	   scanf("%d",&arr[i]);
         }
        for(j=0;j<n;j++)
         {
           s+=arr[j];
	 }
       printf("sum of array:%d",s);
       avg=s/n;
      printf("average:%d",avg);
     return 0;
}
