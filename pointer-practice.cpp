
#include <stdio.h>

int B = 2;
void assign(int *p) { p = &B; }
void assign2(int **p) { *p = &B; }

// void func(int *p){p = &B;}
int main()
{
    int A = 1, C = 3;
    int *ptrA = &A;
    assign(ptrA);
    assign2(&ptrA);
    printf("%d\n", *ptrA);
    return 0;
}
