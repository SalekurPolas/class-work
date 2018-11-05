#include <stdio.h> // printf
#include <windows.h> // used for sleep function

int main()
{
    int i;
    for (i=1; i<50; i++)
    {
        printf("\b\b\b\b\b# %3d%%", i);
        Sleep(200);
    }
    return 0;
}
