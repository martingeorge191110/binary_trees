#include "binary_trees.h"

/**
 * binary_tree_leaves - function that
 *		counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the count number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t c;

	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	c = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (c);
}
