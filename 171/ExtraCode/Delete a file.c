#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter File Name With Extention: ");
    char s[100];gets(s);
    FILE *fp=fopen(s,"r");
    fclose(fp);
    remove(s);
    return 0;
}
