#ifndef __COUNTINGSORT_H__
#define __COUNTINGSORT_H__

#define LENGHT 8

void print_array (int *array, int lenght);
void occurences (int *array, int *o_array);
void cumulative_occurences (int *o_array, int o_lenght);
void quicksort (int *array, int *o_array, int *sort_array);

#endif