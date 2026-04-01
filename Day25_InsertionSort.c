#include<stdio.h>
int main()
{
    int n,arr[100],i,j,key;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("Sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
