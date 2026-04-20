#include<stdio.h>
int main()
{
    int arr[]={2,7,11,15};
    int n=4;
    int target=9;

    int map[100]={0};
    int found=0;
    for(int i=0;i<n;i++)
    {
        int diff=target-arr[i];
        if(diff>=0&&diff<100&&map[diff]!=0)
        {
            printf("indicies:%d %d",map[diff]-1,i);
            found=1;
        }
        map[arr[i]]=i+1;
    }
    if(found==0)
      printf("No solution found");
}
