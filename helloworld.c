#include <stdio.h>

// 練習終端機傳入參數並打印
int main(int argc, char *argv[])
{
    for(int i = 1; i < argc; i++)
    {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    return 0;
}