#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[40];
    char c;
    printf("Enter file name: ");
    scanf("%[^\n]s",filename);
    fp = fopen(filename,"r");
    c = getc(fp);
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fp);
    }
    fclose(fp);
    return 0;
}
