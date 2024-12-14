#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_postorder - post-order traversal
 * @tree: pointer to the root node
 * @func: a pointer to a function to call for each node
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
