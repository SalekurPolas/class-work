#include<stdio.h>
struct A
{
    char str[100];
    int x;
};

int main()
{
    struct A p;
    FILE *a=fopen("F:\\polas\\taslima\\nadin\\cse115.txt","r");
    if(a!=NULL)
       {
           fgets(p.str,24,a);
           fscanf(a,"%d",&p.x);
           printf("%s %d",p.str,p.x);
           fclose(a);
       }
    else
        {
            printf("File can't found !");
        }

    FILE *b=fopen("F:\\polas\\taslima\\nadin\\cse115l.txt","w");
    if(b!=NULL)
       {
           fprintf(b,"%s ",p.str);
           fprintf(b,"%d",p.x);

           fclose(b);
       }
    else
        {
            printf("File can't found !");
        }
        return 0;
}
