#include "binary_trees.h"

/**
 * binary_tree_is_root - Function to check whether the node is root or not
 * @node: pointer which points to the node
 *
 * Return: (1) if Success
 * otherwise - (0)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
