#include<stdio.h>
int main()
{
    int arr1[]={1,2,2,3,5};
    int arr2[]={1,3,4,5};
    int n1=5,n2=4;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d\t",arr1[i]);
                arr2[j]=-1;
                break;
            }
        }
    }
}
