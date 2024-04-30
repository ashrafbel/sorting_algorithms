#include "sort.h"
/**
 * bubble_sort - sort algoritm to sorts an array of intgers
 * @array: array of intgers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int tp;
	size_t x, y;

	if (!array || !size)
		return;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tp;
				print_array(array, size);
			}
		}
	}
}

