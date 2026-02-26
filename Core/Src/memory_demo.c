#include "memory_demo.h"
#include <stdlib.h>

int global_initialized = 10;      // .data
int global_uninitialized;         // .bss

void stack_example(void)
{
    int local_variable = 5;       // Stack
    (void)local_variable;
}

void heap_example(void)
{
    int *ptr = malloc(10 * sizeof(int));  // Heap

    if(ptr != NULL)
    {
        for(int i = 0; i < 10; i++)
            ptr[i] = i;

        free(ptr);
    }
}
