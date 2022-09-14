#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

/* INIT stack */
void init_stack (stack* stack)
{
    stack->top = EMPTY;
}
/* Check whether the stack is empty */
bool is_empty (stack* stack)
{
    return(stack->top == EMPTY);
}
/* Check whether the stack is full */
bool is_full (stack* stack)
{
    return(stack->top == LENGHT_STACK-1);
}
/* Print all elements in stack*/
void print_stack (stack* stack)
{
    int i;
    printf("Stack: [ ");
    for (i=0; i<=stack->top; i++)
    {
        if(!is_empty(stack)){
            printf("%d ", stack->array[i]);
        }
        else{
            printf("Stack is empty\n");
            break;
        }
    }
    printf("]\n");
}
/* Push an element in the top of stack */
void push (stack* stack, int num)
{
    if(!is_full(stack)){
        stack->top++;
        stack->array[stack->top]=num;
    }
}
/* Remove an element in the top of stack */
void pop (stack* stack)
{
    if(!is_empty(stack)){
        stack->top--;
    }
}
/* Return last item inserted */
int top (stack* stack)
{
    if(!is_empty(stack)){
        return(stack->array[stack->top]);
    }
}