#ifndef STACKADT_LINKEDLIST_H
#define STACKADT_LINKEDLIST_H

typedef struct node{
    char data;
    struct node *next;  
}*Stack;

void init(Stack* S);
void push(Stack* S, char c);
void pop(Stack* S);
char top(Stack S);
int isEmpty(Stack S);
void display(Stack* S);

#endif //STACKADT_LINKEDLIST_H