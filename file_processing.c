#include <stdio.h>
void ex9_1()
{
    int a = 0x31323334, b = 2, c = 100, d = 10;
    FILE *text = fopen("text_9_1.txt", "w");
    fprintf(text, "%d %d %d %d\n", a, b, c, d);
    fprintf(text, "%d %d %d %d\n", a, b, c, d);
    fclose(text);
}

void ex9_2()
{
    int a = 0x31323334, b = 2, c = 100, d = 10;
    FILE *bin = fopen("text_9_2.sav", "wb");
    fwrite(&a, sizeof(a), 1, bin);
    fwrite(&b, sizeof(b), 1, bin);
    fwrite(&c, sizeof(c), 1, bin);
    fwrite(&d, sizeof(d), 1, bin);
    fclose(bin);
}

void ex9_3()
{
    int a[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    FILE *text = fopen("text_9_3.txt", "w");
    printf("sizeof(a) is %d\n", sizeof(a));
    printf("sizeof(a[0]) is %d\n", sizeof(a[0]));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        fprintf(text, "%d\t", a[i]);
    }
    fclose(text);
}

int fib(int i, int arr[])
{
    if (i == 0)
    {
        arr[0] = 1;
        return 1;
    }
    else if (i == 1)
    {
        arr[1] = 1;
        return 1;
    }
    else
    {
        arr[i] = fib(i - 1, arr) + fib(i - 2, arr);
        return arr[i];
    }
}

void lab9_3()
{
    FILE *text = fopen("lab93_text.txt", "w");
    int number = 10;
    int arr[number + 1];
    for (int i = 0; i <= number; i++)
    {
        arr[i] = 0;
    }
    fib(number, arr);

    for (int i = 0; i < (number + 1); i++)
    {
        fprintf(text, "%d\t", arr[i]);
    }
    fclose(text);
}


int main()
{
    // ex9_1();
    // ex9_2();
    // ex9_3();
    lab9_3();
}