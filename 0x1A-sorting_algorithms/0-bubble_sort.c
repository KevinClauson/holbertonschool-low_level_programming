#include "sort.h"

void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int flag;

    for (i = 0; i < size - 1; ++i)
    {
        flag = 1;
        for (j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);     
                print_array(array, size);
                flag = 0;
            }
        }
        if (flag)
            break;
    }
}
