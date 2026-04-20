#include<stdio.h>
int main()
{
    int n=6;
    int arr[]={16,17,4,3,5,2};
    for(int i=0;i<n;i++)
    {
        int isLeader=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                isLeader=0;
                break;
            }
        }
        if(isLeader)
        {
            printf("%d\t",arr[i]);
        }
    }
}
