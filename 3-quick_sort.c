#include "sort.h"
/**
  * quick_sort - quick sort algorithm that sort array elems
  * @array: array to sort
  * @size: array size
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_alg(array, 0, size - 1, size);
}

/**
  * sort_alg - algorithm to recursively sorting array elems
  * @arr: array
  * @left: leftmost array index
  * @right: rightmost array index
  * @size: array size
  */
void sort_alg(int *arr, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = split(arr, left, right, size);
		sort_alg(arr, left, pivot - 1, size);
		sort_alg(arr, pivot + 1, right, size);
	}
}

/**
  * split - split array
  * @arr: the array
  * @left: leftmost array index
  * @right: rightmost array index
  * @size: array size
  * Return: pivot index
  */
int split(int *arr, int left, int right, size_t size)
{
	int i, i2, pivot, tmp;

	pivot = arr[right];
	i = left;

	for (i2 = left; i2 < right; i2++)
	{
		if (arr[i2] < pivot)
		{
			if (i != i2)
			{
				tmp = arr[i2];
				arr[i2] = arr[i];
				arr[i] = tmp;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[right])
	{
		tmp = arr[i];
		arr[i] = arr[right];
		arr[right] = tmp;
		print_array(arr, size);
	}

	return (i);
}