#include "sort.h"
/**
  * selection_sort - selection sort algorithm on array elemments
  * @array: the array to sort
  * @size: the size of array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, i2;
	int min, tmp, list_idx;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (i2 = i + 1; i2 < size; i2++)
		{
			if (min > array[i2])
			{
				min = array[i2];
				list_idx = i2;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[i] = min;
			array[list_idx] = tmp;
			print_array(array, size);
		}
	}
}