#include "memory_demo.h"
#include "custom_malloc.h"

int main(void)
{
    stack_example();
    heap_example();

    int* test = simple_malloc(100);

    while(1)
    {
    }
}
