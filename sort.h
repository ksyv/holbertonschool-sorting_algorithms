#ifndef __SORT__
#define __SORT__
#include <stdio.h>
#include <stdlib.h>
/*structure*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*prototype*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(listint_t **h, listint_t **n1, listint_t *n2);
void swapIntegers(int *sortInteger, int *unsortInteger);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int lomutoPartition(int *array, size_t size, int left, int right);
void lomutoSort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

#endif
