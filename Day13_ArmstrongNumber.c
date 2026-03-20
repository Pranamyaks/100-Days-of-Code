#include<stdio.h>
#include<math.h>
int main()
{
    int n,original,digits=0,rem,result=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        n=n/10;
        digits++;
    }
    n=original;
    while(n!=0)
    {
        rem=n%10;
        result+=pow(rem,digits);
        n=n/10;
    }
    if(result==original)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}
