#include <stdio.h>
#include <stdlib.h>
#include "countingsort.h"

/*
 *  Print array function 
*/
void print_array (int *array, int lenght)
{
    int i;
    printf("Array: ");
    for (i = 0; i < lenght; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/*
 *  Occurrences function
 *  Find the total frequency/occurrences of each element and 
 *  store the count at ith index in count array. 
*/
void occurences (int *array, int *o_array)
{
    int i;
    for (i = 0; i < LENGHT; i++)
    {
        o_array[array[i]-1]++;
    }
}

/*
 *  cumulative_occurrences function
 *  find the cumulative sum by adding current(i) and prev(i-1) count and store 
 *	it in count arr itself
*/
void cumulative_occurences (int *o_array, int o_lenght)
{
    int i;
    for (i = 0; i < o_lenght; i++)
    {
        o_array[i] = o_array[i] + o_array[i-1];
    }    
}

/*
 *  quicksort function
*/
void quicksort (int *array, int *o_array, int *sort_array)
{
    int i;
    for (i = (LENGHT-1); i >= 0; i--)
    {
        sort_array[o_array[array[i]-1]-1] = array[i];
        o_array[array[i]-1]--;
    }
}
