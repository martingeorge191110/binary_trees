#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: (pointer to the node)
 * otherwise - (NULL)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *right = node->parent->right;

	if (!node || !node->parent)
		return (NULL);

	if (node == right)
		return (node->parent->left);

	return (right);
}
