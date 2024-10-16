#ifndef ISTACK_H
#define ISTACK_H

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct Stack
{
    Node *top;
    int length;
} Stack;

Stack *s_create();
int s_push(Stack *s, int n);
int s_pop(Stack *s);
int s_top(Stack *s);
int s_empty(Stack *s);
int s_length(Stack *s);

#endif /* ISTACK_H */
