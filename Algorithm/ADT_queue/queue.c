#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"


/*  
 *  Init a new queue
 *  Set pointers to -1  
*/
void init_queue (new_queue* queue)
{
    queue->front = -1;  
    queue->rear = -1;
}

/*  
 *  Insert new data into queue
 *  Insert at rear 
*/
void enqueue (new_queue* queue, int new_data)
{
    if(is_full(queue)){
        printf("Queue overflow!");
    }
    // Back to top if there's empty position, circular queue
    else if(queue->rear == (LENGHT-1) && queue->front != 0){
        queue->rear = 0;
        queue->data_queue[queue->rear] = new_data;
    }
    else{
        // First insertion
        if(is_empty(queue)){
            queue->front=0;
        }
        // Norma insertion
        queue->rear++;
        queue->data_queue[queue->rear] = new_data;        
    }
}

/*  
 *  Delete data from queue
 *  Delete at front (FIFO) 
*/
void dequeue (new_queue* queue)
{
    if(!is_empty(queue)){
        // Back to top if there's an element, circular queue
        if(queue->front == (LENGHT-1) && (queue->front != queue->rear)){
            queue->front = 0;
        }
        // The last element after a complete insertion
        // Make queue empty 
        else if (queue->front == queue->rear)
        {
            init_queue(queue);
        }
        // Normal elimination
        else{
            queue->front++;
        }
    }
}
/*  
 *  Check if the queue id full
 *  True if is full
*/
bool is_full (new_queue* queue)
{
    bool check;
    if(queue->rear == (LENGHT-1) && queue->front == 0){
        printf("\nQueue if FULL!");
        check = true;
    }
    else if ((queue->front - queue->rear)==1)
    {
        printf("\nQueue if FULL!\n");
        check = true;
    }
    else{
        check = false;
    }
    return check;
}
/*  
 *  Check if the queue id empty
 *  True if is empty
*/
bool is_empty (new_queue* queue)
{
    bool check;
    if(queue->front == -1 && queue->rear == -1){
        printf("\nQueue is empty\n");
        check=true;
    }
    else{
        check=false;
    }
    return check;
}

/*  
 *  Print data from queue
*/
void print_queue (new_queue* queue)
{
    int i;
    int front, rear;
    front = queue->front;
    rear = queue->rear;

    if(!is_empty(queue)){
        printf("\nQUEUE: ");
        if (rear<front){
            for (i = 0; i <= rear; i++)
            {
                printf("%d ", queue->data_queue[i]);
            }
            for (i = front; i < LENGHT; i++)
            {
                printf("%d ", queue->data_queue[i]);
            }
        }
        else if (front == rear){
            printf("%d ", queue->data_queue[front]);
        }
        else{
            for (i = queue->front; i <= queue->rear; i++)
            {
                printf("%d ", queue->data_queue[i]);
            }
        }
        printf("\n");
    }
    print_rear_front(queue);    //Debug
}

/*  
 *  Function for debugging, print pointer "front" and "rear"
*/
void print_rear_front (new_queue* queue)
{
    printf("Front: %d, Rear: %d \n", queue->front, queue->rear);
}
