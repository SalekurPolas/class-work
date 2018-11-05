#include<stdio.h>
typedef struct person
{
    char name[30];
}st;

int main()
{
  st x[100];
  FILE *fp=fopen("password.txt","r");
  int i;
  for(i=0; i<1000; i++)
  {
      fscanf(fp,"%s",x[i].name);
      if( feof(fp) )
      {
         break ;
      }
  }
  printf("%d",i);
  fclose(fp);
  return 0;
}
