#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],temp[200];
    printf("Enter First string:");
    scanf("%s",str1);
    printf("Enter Second string:");
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("No Rotation");h
    }
    strcpy(temp,str1);
    strcat(temp,str1);
    if(strstr(temp,str2))
        printf("Rotation");
    else
        printf("Not Rotation");
}
