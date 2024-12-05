#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: return 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: (tree height)
 * otherwise - (0) if tree equall null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * full_node - check whether the node is full or not
 * @tree: pointer to the root node of the tree to check
 *
 * Return: (1) when the node is full
 * otherwise - (0)
 */
int full_node(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree && tree->left && tree->right)
		return (1);

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: (1) if the tree is perfect
 * otherwise - (0)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_leaf, right_leaf, left_full, right_full;

	if (tree
	&& (binary_tree_height(tree->left) == binary_tree_height(tree->right)))
	{
		left_leaf = binary_tree_is_leaf(tree->left);
		right_leaf = binary_tree_is_leaf(tree->right);
		left_full = full_node(tree->left);
		right_full = full_node(tree->right);

		if (binary_tree_height(tree->right) == 0)
			return (1);

		if (left_leaf && right_leaf)
			return (1);

		if (left_full && right_full)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	return (0);
}
