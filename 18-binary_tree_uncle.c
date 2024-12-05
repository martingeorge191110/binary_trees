#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle of
 *
 * Return: (pointer to the uncle)
 * otherwise - (NULL)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *left = node->parent->parent->left;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == left)
		return (node->parent->parent->right);

	return (left);
}
