#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree
 * @parent: parnt of the node
 * @value: value to store in node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	return (new_node);
}
