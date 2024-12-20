#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linklistfn.h"

typedef struct Flight
{
    char flightNo[10];
    char airline[30];
    char origin[4], destination[4];
    int frequency, sitCapacity;
    double duration;
} Flight;

typedef struct FlightNode
{
    Flight data;
    struct FlightNode *next;
} FlightNode;

void ex14_2()
{
    FlightNode a;
    a.data.frequency = 100;
    printf("%d\n", a.data.frequency);
    printf("%d\n", a.next);
}



void ex14_3()
{
    Node a, c;
    a.alpha = 'a';
    a.next = &c;

    a.next->alpha = 'C';
    printf("%c\n", a.next->alpha);
}

void ex14_4()
{
    Node a, c, t;
    a.alpha = 'A';
    a.next = &c;
    c.alpha = 'C';
    c.next = &t;
    t.alpha = 'T';
    t.next = 0;

    Node *now = &a;
    while (now)
    {
        printf("%c\n", now->alpha);
        now = now->next;
    }
    putchar('\n');
}



void ex14_5()
{
    Node a, c, t;
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
    Node act[3];
    Node *now = &act[0];
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


void ex14_7()
{
    char letter[4] = {'A', 'G', 'O'};
    char target = 'O';
    Node *linklist = builtLLByLoop(letter);
    Node *now = &linklist[0];
    while (now)
    {
        if (now->alpha == target)
        {
            printf("found\n");
            printf("the index is %d\n", now - &linklist[0]);
            break;
        }

        now = now->next;
    }
}

void ex14_8()
{
    char letter[4] = {'A', 'G', 'O'};
    char target = 'G';
    Node *linklist = builtLLByLoop(letter);
    Node *now = &linklist[0];
    Node x;
    while (now)
    {
        if (now->alpha == target)
        {
            printf("found\n");
            printf("the index is %d\n", now - &linklist[0]);
            Node *loc = now->next;
            x.alpha = 'X';
            x.next = loc;
            now->next = &x;
            break;
        }
        now = now->next;
    }
    printNode(&linklist[0]);
}

void ex14_9()
{
    char letter[5] = {'W', 'E', 'A', 'R'};
    char target = 'E';
    Node *linklist = builtLLByLoop(letter);
    Node *now = &linklist[0];
    Node *pre = &linklist[0];
    printNode(&linklist[0]);

    while (now)
    {
        if (now->alpha == target)
        {
            pre->next = now->next;
            break;
        }
        pre = now;
        now = now->next;
    }
    printNode(&linklist[0]);
    free(linklist);
}



void ex14_12()
{
    Node *stack = 0;
    push(&stack, 'A');
    push(&stack, 'B');
    push(&stack, 'C');
    printNode(stack);
    free(stack);
}



void ex14_13()
{
    Node *head = 0;
    push(&head, 'A');
    push(&head, 'B');
    push(&head, 'C');
    printNode(head);
    pop(&head);
    printNode(head);
    free(head);
}



void ex14_14()
{
    Node *stack = 0;
    push(&stack, 'A');
    push(&stack, 'B');
    push(&stack, 'C');
    printNode(stack);
    release(&stack);
    printNode(stack);
}

void main()
{
    // ex14_2();
    // ex14_3();
    // ex14_4();
    // ex14_5();
    // ex14_6();
    // ex14_7();
    // ex14_8();
    // ex14_9();
    // ex14_12();
    // ex14_13();
    ex14_14();
}