#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes
 * @tree: pointer to the root node
 * Return: size or 0 if empty
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_node = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	num_node++;
	num_node += binary_tree_nodes(tree->left);
	num_node += binary_tree_nodes(tree->right);
	return (num_node);
}
