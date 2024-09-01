#include <stdio.h>
#include "stackADT_linkedlist.c"
// #include "stackADT_array.c"

int main(){
    Stack S;
    init(&S);
    push(&S, 'a');
    push(&S, 'b');
    push(&S, 'c');
    display(&S);
    pop(&S);
    display(&S);
    printf("%c\n", top(S));
    return 0;
}