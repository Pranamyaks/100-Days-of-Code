#include<stdio.h>
int main()
{
    int n,arr[100],sum=0,missing,total;
    printf("Enter the array elements:");
    scanf("%d",&n);
    printf("Enter the %d array elements:",n-1);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    total=n*(n+1)/2;
    missing=total-sum;
    printf("Missing number is %d",missing);
}
