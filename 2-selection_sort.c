#include "sort.h"
/**
 * selection_sort - sort algho to sortet an arr of integers
 * @array: array
 * @size: Size arr
 */
void selection_sort(int *array, size_t size)
{
	int tp;
	size_t MinPos, x, y;

	if (!array || !size)
		return;
	for (x = 0; x < size - 1; x++)
	{
		MinPos = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[MinPos])
				MinPos = y;
		}
			if (MinPos != x)
			{
				tp = array[x];
				array[x] = array[MinPos];
				array[MinPos] = tp;
				print_array(array, size);
			}
	}
}
