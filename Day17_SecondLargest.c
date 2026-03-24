#include<stdio.h>
int main()
{
    int n,arr[100],i,largest,secondlargest;
    printf("Enter Number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=secondlargest=-9999;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest&&arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    printf("second largest element is %d",secondlargest);
}
