#include <stdio.h>

#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_SIZE 1024
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

void ex9_4()
{
    int a[18] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    FILE *bin = fopen("text_9_4.sav", "wb");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        fwrite(&a[i], sizeof(a[i]), 1, bin);
    }
    fclose(bin);
}

void lab9_4()
{
    int number = 10;
    int arr[number + 1];
    for (int i = 0; i <= number; i++)
    {
        arr[i] = 0;
    }

    fib(number, arr);

    FILE *bin = fopen("lab_9_4.sav", "wb");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        fwrite(&arr[i], sizeof(arr[i]), 1, bin);
    }
    fclose(bin);
}

void ex9_5()
{
    int a[20] = {0};
    FILE *bin = fopen("text_9_4.sav", "rb");
    for (int i = 0; i < 20; i++)
    {
        fread(&a[i], sizeof(a[i]), 1, bin);
    }
    fclose(bin);
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t", a[i]);
        if ((i + 1) % 5 == 0)
        {
            putchar('\n');
        }
    }
}

void ex9_6()
{
    int a[20] = {0};
    FILE *text = fopen("text_9_3.txt", "r");
    for (int i = 0; i < 20; i++)
    {
        fscanf(text, "%d", &a[i]);
    }
    fclose(text);
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t", a[i]);
        if ((i + 1) % 5 == 0)
        {
            putchar('\n');
        }
    }
}
void ex9_7()
{
    int i, j, row = 29, col = 6;
    int a[row][col];
    char s[row][10];
    FILE *text = fopen("pop_ntc.txt", "r");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col + 1; j++)
        {
            if (j == 0)
            {
                fscanf(text, "%s", &s[i][j]);
            }
            else
            {
                fscanf(text, "%d", &a[i][j - 1]);
            }
        }
    }
    fclose(text);

    for (i = 0; i < row; i++)
    {
        printf("%s\t", s[i]);
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        putchar('\n');
    }
}

void ex9_8()
{
    char filename[] = "pop.csv";
    FILE *csv = fopen(filename, "r");
    if (csv == NULL)
    {
        fprintf(stderr, "failed to open file");
        return;
    }
    char line[MAX_LINE_SIZE];
    char *result = NULL;
    fseek(csv, 3, SEEK_SET);
    fgets(line, MAX_LINE_SIZE, csv);
    printf("%s", line);
    printf("------\n");
    result = strtok(line, ",");
    printf("%s\n", line);
    printf("------\n");

    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", atoi(result));
        result = strtok(NULL, ",");
    }
    fclose(csv);
}

void ex9_9()
{
    char filename[] = "pop.csv";
    FILE *csv = fopen(filename, "r");
    if (csv == NULL)
    {
        fprintf(stderr, "failed to open file");
        return;
    }
    char line[MAX_LINE_SIZE];
    char *result = NULL;
    fseek(csv, 3, SEEK_SET);
    while (fgets(line, MAX_LINE_SIZE, csv) != NULL)
    {
        result = strtok(line, ",");
        int i;
        for (i = 0; i < 9; i++)
        {
            printf("%7d\t", atoi(result));
            result = strtok(NULL, ",");
        }
        printf("\n");
    }
    fclose(csv);
}

int ex9_10()
{
    char filename[] = "pop.csv";
    FILE *csv = fopen(filename, "r");

    // test whether the file can be opened
    if (!csv)
    {
        fprintf(stderr, "failed to open file for reading\n");
        return 1;
    }

    // read data line-by-line
    // set a pointer for processing data
    // move the starting pointer
    char line[MAX_LINE_SIZE];
    char *result = NULL;
    fseek(csv, 3, SEEK_SET);
    int date[29][2] = {0};
    char disa[29][20];
    int popa[29][6] = {0};
    int i, j, row = 0;

    // use fgets to fetch line data in csv
    while (fgets(line, MAX_LINE_SIZE, csv) != NULL)
    {
        // separate data with delimiter
        result = strtok(line, ",");
        // parsing data
        for (i = 0; i < 9; i++)
        {
            if (i < 2)
            {
                date[row][i] = atoi(result);
            }
            else if (i == 2)
            {
                // printf("%s%d\t", result, strlen(result)+1);
                strcpy(disa[row], result);
            }
            else
            {
                popa[row][i - 3] = atoi(result);
            }
            result = strtok(NULL, ",");
        }
        row++;
    }

    // close the file
    fclose(csv);

    // print it out for testing
    for (i = 0; i < 29; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j < 2)
            {
                printf("%d\t", date[i][j]);
            }
            else if (j == 2)
            {
                printf("%10s\t", disa[i]);
            }
            else
            {
                printf("%7d\t", popa[i][j - 3]);
            }
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "");
    // ex9_1();
    // ex9_2();
    // ex9_3();
    // lab9_3();
    // ex9_4();
    // lab9_4();
    // ex9_5();
    // ex9_6();
    // ex9_7();
    // ex9_8();
    // ex9_9();
    ex9_10();
}