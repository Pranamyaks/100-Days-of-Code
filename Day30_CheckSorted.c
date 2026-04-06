#include<stdio.h>
int main()
{
  int n,arr[100],issorted=1;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the array elements:");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<n-1;i++)
  {
      if(arr[i]>arr[i+1])
      {
          issorted=0;
          break;
      }
  }
  if(issorted)
  {
      printf("array is sorted");
  }
  else
  {
      printf("array is not sorted");
  }
}
