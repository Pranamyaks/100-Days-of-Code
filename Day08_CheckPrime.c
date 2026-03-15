#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            flag=1;
        break;
    }
    if(flag==0)
        printf("Number is prime");
    else
    printf("Number is not a prime");


}
