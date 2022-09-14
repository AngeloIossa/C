#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__

#define LENGHT 8

void swap (int *a, int *b);
void print_array (int *array, int lenght);
int partition (int *array, int first, int last);
void quicksort (int *array, int first, int last);

#endif