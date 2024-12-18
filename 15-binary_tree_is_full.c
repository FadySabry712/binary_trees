#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node
 * Return: 0 if tree is null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	return (0);
}
