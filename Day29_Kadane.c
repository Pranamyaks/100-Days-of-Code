#include<stdio.h>
int main()
{
    int n,arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int currentsum=arr[0];
    int maxsum=arr[0];
    for(int i=0;i<n;i++)
    {
        if(currentsum+arr[i]>arr[i])
        {
            currentsum=currentsum+arr[i];
        }
        else
        {
            currentsum=arr[i];
        }
    }
    if(currentsum>maxsum)
    {
        maxsum=currentsum;
    }
    printf("maxsum is %d",maxsum);
}
