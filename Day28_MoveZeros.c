#include<stdio.h>
int main()
{
    int n,arr[100];
    int i,j=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++)
    {
        arr[i]=0;
    }
    printf("Output\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
