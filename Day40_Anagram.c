#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int freq[26]={0};
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not a anagram");
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        freq[str1[i]-'a']++;
        freq[str2[i]-'a']--;
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        if(freq[i]!=0)
        {
            printf("Not a anagram");
        }
    }
    printf("Anagram");
}
