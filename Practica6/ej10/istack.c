#include <stdio.h>
#include <stdlib.h>
#include "istack.h"

Stack *s_create()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->top = NULL;
    s->length = 0;
    return s;
}

int s_push(Stack *s, int n)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = n;
    new_node->next = s->top;
    s->top = new_node;
    s->length++;
    return n;
}

int s_pop(Stack *s)
{
    if (s_empty(s))
    {
        printf("Stack Underflow. Pop operation failed.\n");
        return -1;
    }
    Node *temp = s->top;
    int popped_data = s->top->data;
    s->top = s->top->next;
    free(temp);
    s->length--;
    return popped_data;
}

int s_top(Stack *s)
{
    if (s_empty(s))
    {
        printf("Stack is empty. No top element.\n");
        return -1;
    }
    return s->top->data;
}

int s_empty(Stack *s)
{
    return s->top == NULL;
}

int s_length(Stack *s)
{
    return s->length;
}
