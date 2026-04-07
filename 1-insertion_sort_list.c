#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_nodes - bubble sorts
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * return: array
 */
void swap_nodes(listint_t **list, listint_t *n1, listint_t *n2)
{
if (n1->prev)
{
n1->prev->next = n2;
}
else
{
*list = n2;
}

if (n2->next)
{
n2->next->prev = n1;
}

n2->prev = n1->prev;
n1->prev = n2;
n1->next = n2->next;
n2->next = n1;
}

/**
 * insertion_sort_list - bubble sorts
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
