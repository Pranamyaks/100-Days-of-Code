#include<stdio.h>
int main()
{
    int n,temp,arr[10],minIndex;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    printf("Sorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
