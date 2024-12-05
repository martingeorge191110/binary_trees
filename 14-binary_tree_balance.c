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
		return (-1);

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
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The balance factor, or 0 if the tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);


    int l_height = binary_tree_height(tree->left) + 1;
    int r_height = binary_tree_height(tree->right) + 1;


    return (l_height - r_height);
}
