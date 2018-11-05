#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[40];
    printf("Enter file name: ");
    scanf("%[^\n]s",filename);
    fp = fopen(filename,"w");
    fclose(fp);
    return 0;
}

