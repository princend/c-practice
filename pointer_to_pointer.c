#include <stdio.h>

void lab7_1(int a[], int s, int **ptrmax)
{
    *ptrmax = a;
    int i;
    for (int i = 0; i < s; i++)
    {
        if (a[i] > **ptrmax)
        {
            *ptrmax = &a[i];
        }
    }
}

void lab7_1_min(int a[], int s, int **ptrmin)
{
    *ptrmin = a;
    int i;
    for (int i = 0; i < s; i++)
    {
        if (a[i] < **ptrmin)
        {
            *ptrmin = &a[i];
        }
    }
}

void testLab7_1()
{
    printf("Ex7-3:pointer to pointer ::find max in an array\n");
    int arr[5] = {51, 41, 311, 211, 110};
    int size = 5, *max;
    lab7_1(arr, size, &max);
    printf("max:%d\n", *max);
}

void testLab7_1_min()
{
    printf("Ex7-3:pointer to pointer ::find max in an array\n");
    int arr[10] = {5, 7, 9, 3, 4, 0, 6, 1, 2, 8};
    int size = 10, *min;
    lab7_1_min(arr, size, &min);
    printf("min:%d\n", *min);
}

int main()
{
    //   testLab7_1();
    testLab7_1_min();
}