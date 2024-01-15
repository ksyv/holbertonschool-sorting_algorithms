#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *  using the Bubble sort algorithm
 * @array: array to be sorted from the parameter.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t index = 0;
	int temporaryInt = 0, checkSwip = 1;

	if (array == NULL || size < 2)
		return;
	while (checkSwip != 0)
	{
		checkSwip = 0;
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				temporaryInt = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temporaryInt;
				checkSwip = 1;
				print_array(array, size);
			}
		}
	}
}
