#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - bubble sorts
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * return: array
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *insert, *tmp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
current = (*list)->next;
while (current != NULL)
{
tmp = current->next;
insert = current->prev;

while (insert != NULL && current->n < insert->n)
{
swap_nodes(list, insert, current);
print_list((const listint_t *)*list);
insert = current->prev;
}
current = tmp;
}
}
