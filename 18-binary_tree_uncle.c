#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _binary_tree_sibling - finds sibling of node
 * @node: pntr to the sibling node
 * Return: ptr to siblng or NULL if not found
 */

binary_tree_t *_binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent && node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - node to the uncle ptr node
 * @node: ptr to the node
 * Return: ptr to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (_binary_tree_sibling(node->parent))
		return (_binary_tree_sibling(node->parent));
	return (NULL);

}
