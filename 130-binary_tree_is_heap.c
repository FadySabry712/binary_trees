#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a tree
 * @tree: root
 * Return: size of the tree or 0 if NULL;
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * tree_is_complete - checks if tree is complete
 * @tree: pointer to the root
 * @i: node index
 * @cnodes: number of node
 * Return: 1 if tree is complete, else 0
 */

int tree_is_complete(const binary_tree_t *tree, int i, int cnodes)
{
	if (tree == NULL)
		return (1);

	if (i >= cnodes)
		return (0);

	return (tree_is_complete(tree->left, (2 * i) + 1, cnodes) &&
		tree_is_complete(tree->right, (2 * i) + 2, cnodes));
}


/**
 * binary_tree_is_complete - calls to tree_is_complete
 * @tree: tree root
 * Return: 1 if tree is complete, else 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t cnodes;

	if (tree == NULL)
		return (0);

	cnodes = binary_tree_size(tree);

	return (tree_is_complete(tree, 0, cnodes));
}

/**
 * check_parent - checks if parent has a greater value than childs
 * @tree: pointer to node
 * Return: 1 if parent has a greater value, else 0
 */

int check_parent(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->n > tree->parent->n)
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}

/**
 * binary_tree_is_heap - checks if an input tree is a Max Binary
 * @tree: pointer to the root
 * Return: 1 if tree is a Max Heap, else 0
 */

int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!binary_tree_is_complete(tree))
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}
