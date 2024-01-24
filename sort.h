#ifndef SORT_H
#define SORT_H
/*Includes*/
#include <stdio.h>

/*struct*/
/**
 * struct listint_s - d-linked list node
 *
 * @n: Int stored in the node
 * @prev: Pointer to previous list element
 * @next: Pointer to next list element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*Prototypes*/

void bubble_sort(int *array, size_t size);

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
int split(int *arr, int left, int right, size_t size);
void sort_alg(int *arr, int left, int right, size_t size);
void shell_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);

#endif