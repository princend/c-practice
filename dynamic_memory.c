#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex12_1()
{
    int size = 5;
    int *p = (int *)malloc(sizeof(int) * size);
    printf("%10d(%p)\n", *p, &p);
    printf("index | value | memory location\n");
    for (int i = 0; i < size; i++)
    {
        printf("%5d | %10d | %p\n", i, p[i], &p[i]);
    }
}

void ex12_2()
{
    int size = 5;
    int *p = (int *)malloc(sizeof(int) * size);
    printf("%10d(%p)\n", *p, &p);
    printf("index | value | memory location\n");
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 10;
        printf("%5d | %10d | %p\n", i, p[i], &p[i]);
    }
}

void lab12_1()
{
    int size = 5;
    int *p = (int *)malloc(sizeof(int) * size);
    memset(p, 0, 20);
    // printf("%d\n", p);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", p[i]);
    }
    free(p);
}

void ex12_7()
{
    int size = 5;
    int *p = (int *)calloc(size, sizeof(int));
    // memset(p, 0, 20);
    // printf("%d\n", p);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", p[i]);
    }
    free(p);
}

void ex12_8()
{
    int size = 5;
    int *arr1 = (int *)malloc(sizeof(int) * size);
    memset(arr1, 0, 20);
    // printf("%d\n", p);
    for (int i = 0; i < size; i++)
    {
        arr1[i] = 10 + i;
        printf("%d\n", arr1[i]);
    }

    int *arr2 = realloc(arr1, sizeof(int) * size * 2);
    for (int i = 0; i < size * 2; i++)
    {
        printf("%d\n", arr2[i]);
    }

    free(arr1);
    free(arr2);
}

void ex12_9()
{
    int col = 4, row = 2, i, j;
    int **arr = (int **)malloc(sizeof(int *) * row);
    for (i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * col);
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("(%d,%d)%8d(%p)\n", i, j, arr[i][j], &arr[i][j]);
        }
        putchar('\n');
    }
    free(arr);
}

int *expand(int size){
    int *exp=(int*) malloc(sizeof(int)*size);
    return exp;
}

int expand_2(int **exp,int size){
    *exp=(int*) malloc(sizeof(int)*size);
    return 0;
}

void ex12_13(){
    int *arr=expand(10);
    free(arr);
    arr=0;
}

void ex12_15(){
    int *arr;
    expand_2(&arr,10);
    free(arr);
}

void ex12_16(){
    int size=10;
    int *arr=(int*)malloc(sizeof(int)*size);
    free(arr);
    arr=0;
    printf("%d\n",arr);
    printf("%d\n",arr[1]);
}

void main()
{
    //   ex12_1();
    //   ex12_2();
    // lab12_1();
    // ex12_7();
    // ex12_8();
    // ex12_9();
    // ex12_13();
    // ex12_15();
    ex12_16();
}