#include <stdio.h>
#include <stdlib.h>
#include "countingsort.h"

int main(int argc, char const *argv[])
{
    int array[LENGHT]={3,6,4,1,3,4,1,4};
    const int k = 6;  // Range of elements
    int o_array[k]={0};
    int sort_array[LENGHT]={0};

    printf("First Array:\n");
    print_array(array, LENGHT);

    printf("Array of occurences:\n");
    occurences(array, o_array);
    print_array(o_array, k);

    printf("Array of cumulative_occurences:\n");
    cumulative_occurences(o_array, k);
    print_array(o_array, k);
   
    printf("Array sorted:\n");
    quicksort(array, o_array, sort_array);
    print_array(sort_array, LENGHT);


    return 0;
}

