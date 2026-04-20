#include<stdio.h>
int main()
{
    char str[100];
    int num=0;
    printf("Enter a number:");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        int digit=str[i]-'0';
        num=num*10+digit;
    }
    printf("integer=%d",num);
}
