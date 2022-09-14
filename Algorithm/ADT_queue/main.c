#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"


int main(int argc, char const *argv[])
{
    new_queue queue;
    int i;
    int choice, num;

    init_queue(&queue);

    while (1)
    {
        printf("\nLegenda:\n");
        printf("1. aggiungi elemento (integer number)\n");
        printf("2. elimina elemento\n");
        printf("3. stampa coda\n");
        printf("Fai la tua scelta:");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Inserisci numero intero:");
                scanf("%d", &num);
                enqueue(&queue, num);
                print_queue(&queue);
                break;
            case 2:
                dequeue(&queue);
                print_queue(&queue);
                break;
            case 3:
                print_queue(&queue);
            default:
                break;
        }
    }
    return 0;
}






