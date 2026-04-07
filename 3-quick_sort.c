#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_ints - bubble sorts
 * @a: The array of integers to sort.
 * @b: The size of the array.
 * return: array
 */

void swap_ints(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * lomuto_partition - bubble sorts
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * @low: low int
 * @high: high int
 * return: array
 */

int lomuto_partition(int *array, size_t size, int low, int high)
{
int pivot = array[high];
int i = low, j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
i++;
}
}

if (array[i] != array[high])
{
swap_ints(&array[i], &array[high]);
print_array(array, size);
}

return (i);
}

/**
 * quick_recursion - bubble sorts
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * @low: low int
 * @high: high int
 * return: array
 */

void quick_recursion(int *array, size_t size, int low, int high)
{
int pivot_index;

if (low < high)
{
pivot_index = lomuto_partition(array, size, low, high);
quick_recursion(array, size, low, pivot_index - 1);
quick_recursion(array, size, pivot_index + 1, high);
}
}

/**
 * quick_sort - bubble sorts
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * return: array
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}

quick_recursion(array, size, 0, size - 1);
}
