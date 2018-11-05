#include <stdio.h>
#include <windows.h>

int main()
{
    int i;
    char str[] = "                                        ";
    for(i = 0 ; i <=40 ; i++)
    {
        printf("\r[%s]%3d%%",str,i);
        str[i] = '#';
        Sleep(100);
    }
    return 0;
}
