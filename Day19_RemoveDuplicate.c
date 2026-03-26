#include<stdio.h>
int main()
{
    int n,arr[10];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the array elments:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array after removing duplicates:");
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("%d",arr[n-1]);
}
