#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int isPalindrome=1;
    printf("Enter a string:");
    scanf("%s",str);
    int start=0;
    int end=strlen(str)-1;
    while(str<end)
    {
        if(str[start]!=str[end])
        {
            isPalindrome=0;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome)
    {
        printf("String is Polindrome");
    }
    else
    {
        printf("Not a polindrome");
    }

}
