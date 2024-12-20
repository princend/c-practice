#include <stdio.h>
#include <string.h>
int hextoOct(char hex)
{
    if (hex >= '0' && hex <= '9')
    {
        return hex - '0';
    }
    else if (hex >= 'A' && hex <= 'F')
    {
        return hex - 'A' + 10;
    }
    else
    {
        return -1;
    }
}

void main()
{
    int a = hextoOct('B');
    printf("%d",a);
}