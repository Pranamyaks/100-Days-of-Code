#include<stdio.h>
int main()
{
    int arr[]={2,2,1,2,3};
    int n=5;
    int candidate=arr[0];
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            candidate=arr[i];
            count=1;
        }
    }
    int freq=0;

    for(int i=0;i<n;i++)
        if(arr[i]==candidate)
        {
            freq++;
        }
        if(freq>n/2)
        {
            printf("mojority element is:%d",candidate);
        }
        else
        {
            printf("No majority element");
        }

}
