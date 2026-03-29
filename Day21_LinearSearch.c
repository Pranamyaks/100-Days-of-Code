#include<stdio.h>
int main()
{
    int n,arr[10],key,i,found=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {


        scanf("%d",&arr[i]);
    }
    printf("Enter the key elements to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {


        printf("Element found at position %d",i+1);
        found=1;
        break;
        }
    }
    if(found==0)
        printf("Element not found");
}
