#include<stdio.h>
int myStrstr(char str[],char sub[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        int j=0;
        while(sub[j]!='\0'&&str[i+j]==sub[j])
        {
            j++;
        }
        if(sub[j]=='\0')

            return i;
    }
        return -1;

}
int main()
{
    char str[100],sub[100];
    printf("Enter main string:");
    scanf("%s",str);
    printf("Enter sub string:");
    scanf("%s",sub);
    int index=myStrstr(str,sub);
    if(index!=-1)
    {
        printf("Substring is found at index:%d",index);
    }
    else
    {
        printf("Substring is not found");
    }
}
