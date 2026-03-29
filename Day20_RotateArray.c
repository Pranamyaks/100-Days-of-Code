#include<stdio.h>
int reverse(int arr[],int start,int end)
{
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n,arr[10],k,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {


        scanf("%d",&arr[i]);
    }
    printf("Enter k:");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("Rotated elements:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
