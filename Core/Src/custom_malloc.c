#include "custom_malloc.h"

#define HEAP_SIZE 1024

static unsigned char heap[HEAP_SIZE];
static unsigned int heap_index = 0;

void* simple_malloc(unsigned int size)
{
    if(heap_index + size > HEAP_SIZE)
        return 0;

    void* ptr = &heap[heap_index];
    heap_index += size;

    return ptr;
}
