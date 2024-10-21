#include <stdio.h>
#include <string.h>

typedef struct Flight
{
    char flightNo[10];
    char airline[30];
    char origin[4], destination[4];
    int frequency, sitCapacity;
    double duration;
} Flight;

typedef struct Node
{
    Flight data;
    struct Node *next;
} Node;

void ex14_2()
{
    Node a;
    a.data.frequency = 100;
    printf("%d\n", a.data.frequency);
    printf("%d\n", a.next);
}

typedef struct Node_1
{
    char alpha;
    struct Node_1 *next;
} Node_1;

void ex14_3()
{
    Node_1 a, c;
    a.alpha = 'a';
    a.next = &c;

    a.next->alpha = 'C';
    printf("%c\n", a.next->alpha);
}

void ex14_4()
{
    Node_1 a, c, t;
    a.alpha = 'A';
    a.next = &c;
    c.alpha = 'C';
    c.next = &t;
    t.alpha = 'T';
    t.next = 0;

    Node_1 *now = &a;
    while (now)
    {
        printf("%c\n", now->alpha);
        now = now->next;
    }
    putchar('\n');
}

void printNode(const Node_1 *head)
{
    while (head)
    {
        printf("%c\t", head->alpha);
        head = head->next;
    }
    putchar('\n');
}

void ex14_5()
{
    Node_1 a, c, t;
    a.alpha = 'A';
    a.next = &c;
    c.alpha = 'C';
    c.next = &t;
    t.alpha = 'T';
    t.next = 0;

    printNode(&a);
}

void ex14_6()
{
    char letter[4] = {'A', 'C', 'T'};
    Node_1 act[3];
    Node_1 *now = &act[0];
    for (int i = 0; i < 3; i++)
    {
        now->alpha = letter[i];
        now->next = (i == 2) ? 0 : &act[i + 1];
        printf("[%d]%c,%p\n", i, now->alpha, now->next);
        now = now->next;
    };
    printNode(&act[0]);
    putchar('\n');
    printf("%p %p %p\n", act[0].next, act[1].next, act[2].next);
}

void builtLLByLoop(char letter[])
{
    int size = strlen(letter) + 1;
    Node_1 linklist[size];
    Node_1 *now = &linklist[0];

    for (int i = 0; i < size - 1; i++)
    {
        now->alpha = letter[i];
        now->next = (i == size - 1) ? 0 : &linklist[i + 1];
        printf("[%d]%c,%p\n", i, now->alpha, now->next);
        now = now->next;
    }
}

void main()
{
    // ex14_2();
    // ex14_3();
    // ex14_4();
    // ex14_5();
    // ex14_6();
    char letter[7] = {'A', 'C', 'T', 'I', 'O', 'N'};
    builtLLByLoop(letter);
}