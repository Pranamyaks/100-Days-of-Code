#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[10],largest,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[i];
    for(i=1;i<=n;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
    }
    printf("Largest element is %d",largest);
}
