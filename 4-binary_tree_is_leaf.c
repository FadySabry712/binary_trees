#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if a node is leaf
 * @node: pointer to node
 * Return: 1 if node if leaf, otherwise 0
 */

int binary_tree_is_leaf(binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
