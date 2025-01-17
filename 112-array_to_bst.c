#include "binary_trees.h"

/**
 * array_to_bst - creates a Binary Search Tree from an array
 * @array: pointer to the first element of the array
 * @size: number of element
 * Description: If a value of the array already exists
 * Return: pointer to the root node, or NULL
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
