#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if a node is root
 * @node: pointer to node
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->right == NULL && node->left == NULL)
			return (0);
	}
	return (1);
}
