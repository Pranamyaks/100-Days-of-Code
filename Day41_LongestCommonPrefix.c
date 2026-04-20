#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][100]={"flower","flight","flow"};
    char prefix[100];
    int n=3;
    strcpy(prefix,str[0]);
    for(int i=1;i<n;i++)
    {
        int j=0;
        while(prefix[j]&&str[i][j]&&prefix[j]==str[i][j])
        {
            j++;
        }

    prefix[j]='\0';
    if(prefix[j]=='\0')
        break;
    }
    printf("longest common prefix is:%s",prefix);
}
