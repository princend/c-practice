#include <stdio.h>

Template<class Type>
    List<Type>::~List()
// Free all nodes in the chain
{
    ListNode<Type> *next;
    for (; first; first = next)
    {
        next = first->link;
        delete first;
    }
}