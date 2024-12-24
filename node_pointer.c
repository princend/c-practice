typedef struct *node_pointer;

typedef struct node
{
    node_pointer link;
    element item;
    node_pointer rlink;
};
