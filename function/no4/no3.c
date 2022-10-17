#include<stdio.h>
void rotate_right(int *arr,int n,int r); 
void  rotate_right(int *arr,int n,int r)
{
  int temp;
 for(int j=0;j<r;j++)
{
  temp=arr[n-1];
  for(int i=n-1;i>0;i--)
   {
    arr[i]=arr[i-1];
   }
  arr[0]=temp;
 }
  
}
int main()
{
  int arr[5];
  int i,n,r;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("\nEnter how many times you want to Rotate:");
  scanf("%d",&r);
  printf("elements in array:");
  for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   rotate_right(arr,n,r);
   for(i=0;i<n;i++)
   {
     printf("after rotation:%d",arr[i]);
   }
  return 0;
}

