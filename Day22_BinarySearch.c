#include<stdio.h>
int main()
{
    int n,arr[10],key,i,low=0,high,mid;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("Enter the key elements to be searched:");
    scanf("%d",&key);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at position %d",mid+1);
            return 0;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
        printf("Element not found");

}
