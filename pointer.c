#include <stdio.h>

void my_pointer()
{
    int a = 5;
    float b = 1.2;
    int *p = &a;
    float *q = &b;

    printf("a=%d(address:%p)\n", a, &a);
    printf("b=%f(address:%p)\n", b, &b);
    printf("p=%p\n", p);
    printf("q=%p\n", q);
}

void change()
{
    int a = 12;
    int *p = &a;
    printf("%d\n", a);
    *p = 16;
    printf("%d\n", a);
}

void test1()
{
    int a = 5;
    float b = 1.1;
    int *p = &a;
    float *q = &b;
    printf("%d\n", p);
    return;
}

void lab5_2()
{
    int a = 5;
    int b = 1;
    int *p = &a;
    printf("a=%d;b=%d;*p=%d\n", a, b, *p);

    int *q = &a;
    *q = 12;
    printf("a=%d; b=%d\n", a, b);    // 12,1
    printf("p=%d; *q=%d\n", *p, *q); // 12 ,12
}

void operartors_in_pointers()
{
    printf("Ex 5-5:Operator +/- Pointers\n");
    int a = 5;
    int *p = &a;

    printf("the values of a and its address are %d and %p ,repectively.\n", a, &a);
    printf("the values of p,dereference and its address are %p ,%d and %p,repectively.\n", p, *p, &p);
    printf("\nPlus 1 :: \n");

    a = a + 1;
    p = p + 1;
    printf("the values of a and its address are %d and %p ,repectively. \n", a, &a);
    printf("the values of p,p dereference and its address are %p,%d and %p ,repectively. \n", p, *p, &p);
}

void adavnced_practice(int value1)
{
    int a = value1;
    int *p = &a;
    printf("a address is %p\n", &a);
    printf("a value is %d\n", a);

    unsigned char *q = (char *)p;

    printf("the value of pointer q is %p\n", q);
    printf("the pointing value  of pointer q is %d\n", *q);
    printf("the address  of pointer q is %p\n\n", &q);

    int range4search = 20;
    int newlineNum = 10;
    printf("==== Memory overview ====");
    for (int i = -range4search; i < range4search; i++)
    {
        if (i % newlineNum == 0)
        {
            printf("\n%p\t %d\t", q + i, *(q + i));
        }
        else
        {
            printf("%d\t", *(q + i));
        }
    }
}

void swap()
{
    int a;
    int b;
    printf("pls enter ur first number:\n");
    scanf("%d", &a);
    printf("pls enter ur second number:\n");
    scanf("%d", &b);

    printf("first number is %d\n", a);
    printf("second number is %d\n", b);

    if (a < b)
    {
        printf("first number is less than second\n");
        printf("it will swap\n");
        int *temp2 = &b;
        int c = a;
        a = *temp2;
        b = c;
        printf("after swap\n");
        printf("first number is %d\n", a);
        printf("second number is %d\n", b);
    }
    else
    {
        printf("nothing to do \n");
    }
}

void main()
{
    swap();
    // adavnced_practice(25);
    // adavnced_practice(255);
    // adavnced_practice(256);
    // adavnced_practice(512);
    // adavnced_practice(1024);
    // adavnced_practice(1028);
    // operartors_in_pointers();
    // lab5_2();
    // test1();
    // change();
    // my_pointer();

    // char ssss='s';
    // char aaaa='a';
    // char ssaa[]="sa";
    // char textStr[]="this is a test";

    // char *address = textStr;
    // printf("%c \n",*((char *)(address+3)));
    // *((char *)(address+3))='q';
    // printf("%s",textStr);
    // FILE *file;
    // file = fopen("text.txt","w+");
    // fwrite(&ssss,1,sizeof(ssss),file);
    // fclose(file);
}
