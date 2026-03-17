#include<stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
        printf("%d is polindrome",temp);
    else
        printf("%d is not polindrome",temp);
}
