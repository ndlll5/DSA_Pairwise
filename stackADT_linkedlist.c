#include <stdio.h>
#include <stdlib.h>
#include "stackADT_linkedlist.h"

void init(Stack* S){
    *S = NULL;
}

int isEmpty(Stack S){
    return S == NULL;
}

void push(Stack *S, char c){
    Stack temp = malloc(sizeof(struct node));
    if(temp!=NULL){
        temp->data = c;
        temp->next = *S;
        *S = temp;
    }
}

void pop(Stack *S){
    if(!isEmpty(*S)){
        Stack temp = *S;
        *S = (*S)->next;
        free(temp);
    }
}

char top(Stack S){
    return !isEmpty(S) ? S->data : '\0';
}

void display(Stack* S){
    Stack temp;
    init(&temp);

    for(;!isEmpty(*S); pop(S)){
        printf("%c ", top(*S));
        push(&temp, top(*S));
    }
    printf("\n");

    for(;!isEmpty(temp);pop(&temp)){
        push(S, top(temp));
    }
}