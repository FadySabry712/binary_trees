#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_size - measures the size
 * @tree: pointer to the root node
 * Return: size or 0 if empty
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_tree = 0, r_tree = 0, total_size_tree = 0;

	if (!tree)
		return (0);
	l_tree = binary_tree_size(tree->left) + 1;
	r_tree = binary_tree_size(tree->right) + 1;
	total_size_tree = l_tree + r_tree;
	return (total_size_tree - 1);
}
