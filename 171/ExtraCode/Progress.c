#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 0; i < 10000; i++)
    {
        printf("\rIn progress %d", i/100);
    }
    printf("\n");
}
