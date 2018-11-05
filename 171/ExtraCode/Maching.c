#include<stdio.h>
#include<string.h>
int matching(char x[],char y[]);

int main()
{
    char str1[25],str2[25];
    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);
    int ans=matching(str1,str2);
    printf("%d",ans);
    return 0;
}
int matching(char x[],char y[])
{
    int a=strlen(x);
    int b=strlen(y);
    if(a==b)
    {
        int i=0;
        for(i=0; i<a; i++)
        {
            if(x[i]==y[i]){}
            else
            {
                return 0;
                break;
            }
        }
        if(i==a)
            return 1;
    }
    else
        return 0;
}
