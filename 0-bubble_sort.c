#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "print_array.c"

/**
 * bubble_sort - bubble sorts
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * return: array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
int swapped;

if (array == NULL || size < 2)
{
return;
}

for (i = 0; i < size - 1; i++)
{
for(j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;

print_array(array, size);
swapped = 1;
}
}

if (swapped == 0)
{
 break;
}

}
}
