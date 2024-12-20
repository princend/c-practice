#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node
{
    char alpha;
    struct Node *next;
} Node;

void printNode(const Node *head)
{
    while (head)
    {
        printf("%c\t", head->alpha);
        head = head->next;
    }
    putchar('\n');
}

Node *builtLLByLoop(char letter[])
{
    int size = strlen(letter) + 1;
    Node *linklist = (Node *)malloc(sizeof(Node) * size);
    if (linklist == NULL)
    {
        printf("failed to allocate memory\n");
        return NULL;
    }
    Node *now = &linklist[0];

    for (int i = 0; i < size - 1; i++)
    {
        now->alpha = letter[i];
        now->next = (i == size - 2) ? NULL : &linklist[i + 1];
        printf("[%d]%c,%p\n", i, now->alpha, now->next);
        now = now->next;
    }
    return linklist;
}


void push(Node **stack, char letter)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->alpha = letter;
    newNode->next = *stack;
    *stack = newNode;
}

void pop(Node **stack)
{
    Node *temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

void release(Node **stack)
{
    while (*stack)
    {
        Node *temp = *stack;
        *stack = (*stack)->next;
        free(temp);
    }
}