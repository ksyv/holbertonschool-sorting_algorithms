#include "sort.h"
/**
 * swapIntegers - Swap two integers in an array.
 * @sortInteger: The first integer to swap.
 * @unsortInteger: The second integer to swap.
 */
void swapIntegers(int *sortInteger, int *unsortInteger)
{
	int temporary;

	temporary = *sortInteger;
	*sortInteger = *unsortInteger;
	*unsortInteger = temporary;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t index, index2;

	if (array == NULL || size < 2)
		return;

	for (index = 0; index < size - 1; index++)
	{
		min = array + index;
		for (index2 = index + 1; index2 < size; index2++)
			min = (array[index2] < *min) ? (array + index2) : min;

		if ((array + index) != min)
		{
			swapIntegers(array + index, min);
			print_array(array, size);
		}
	}
}
