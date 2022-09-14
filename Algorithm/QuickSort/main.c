#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main(int argc, char const *argv[])
{
    int array[LENGHT]={1,55,22,66,44,11,3,2};
    int pointer_subarray,altro;

    printf("Array to ordered:\n");
    print_array(array, LENGHT);

    printf("Array after Quicksort:\n");
    quicksort(array, 0, (LENGHT-1));
    print_array(array, LENGHT);

    return 0;
}
