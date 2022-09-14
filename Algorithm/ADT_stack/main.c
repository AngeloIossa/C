#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h" 


int main(int argc, char const *argv[])
{
    stack node;
    int i, el;

    init_stack(&node);  // Init the stack

    //Check if stack is empty
    if(is_empty(&node)){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack is NOT empty\n");
    }

    // Fill the stack
    for (i=0; i<LENGHT_STACK; i++)
    {
        push(&node, i);
    }
    print_stack(&node);

    // Remove 1 element from stack
    pop(&node);
    print_stack(&node);
    
    // Return last element from stack
    el = top(&node);
    printf("\nReturn last element: %d\n", el);

    return 0;
}
