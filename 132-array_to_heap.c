#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap
 * @array: pointer to the first element of array
 * @size: number of element in array
 * Return: pointer to the root node
 */

heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree;
	size_t i;

	tree = NULL;

	for (i = 0; i < size; i++)
	{
		heap_insert(&tree, array[i]);
	}

	return (tree);
}
