#include "binary_trees.h"

/**
 * binary_tree_node - form binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value stored in the node
 *
 * Return: Pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}
