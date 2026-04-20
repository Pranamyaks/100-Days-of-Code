#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int freq[26]={0};
    printf("Enter a string:");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]-'a']++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]-'a']==1)
        {
            printf("Non repeating character is:%c",str[i]);
            return 0;
        }
    }
    printf("No non repating character");
}
