#include "binary_trees.h"

/**
 * bst_search - searches for a value
 * @tree: pointer to the root node
 * @value: value to search
 * Return: pointer to the node containing a value, or NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp;

	tmp = (bst_t *)tree;
	while (tmp)
	{
		if (tmp->n == value)
			return (tmp);
		if (tmp->n < value)
			tmp = tmp->right;
		else
			tmp = tmp->left;
	}
	return (NULL);
}
