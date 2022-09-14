#ifndef __QUEUE_H__
#define __QUEUE_H__

#define LENGHT 5

typedef struct queue
{
    int data_queue[LENGHT];
    int front;
    int rear;
}new_queue;

void init_queue (new_queue* queue);
void enqueue (new_queue* queue, int new_data);
void dequeue (new_queue* queue);
void print_queue (new_queue* queue);
bool is_full (new_queue* queue);
bool is_empty (new_queue* queue);
void print_rear_front (new_queue* queue);

#endif