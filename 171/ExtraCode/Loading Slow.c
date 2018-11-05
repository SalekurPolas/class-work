#include<stdio.h>
#include<windows.h>

void main()
{
int x;
for(x = 0; x<100; x++)
{
   printf("\b\b# %d%%",x);
   Sleep(1000);
}
}
