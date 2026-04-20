#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    int start=0;
    int end=strlen(str)-1;
    while(start<end)
    {
        int temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("Reversed String is:%s",str);
}
