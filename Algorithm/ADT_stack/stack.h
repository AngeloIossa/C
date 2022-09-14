#ifndef __STACK_H__
#define __STACK_H__

#define LENGHT_STACK 10
#define EMPTY -1


typedef struct stack_node
{
    int top;
    int array[LENGHT_STACK];
}stack;

void init_stack (stack* stack);
bool is_empty (stack* stack);
bool is_full (stack* stack);
void print_stack (stack* stack);
void push (stack* stack, int num);
void pop (stack* stack);
int top (stack* stack);

#endif