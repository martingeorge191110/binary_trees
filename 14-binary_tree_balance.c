#include "binary_trees.h"


/**
 * _height - finds the height of a tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the tree height
 */

size_t _height(const binary_tree_t *tree)
{
	size_t left_ht, right_ht;

	if (tree == NULL)
		return (0);

	left_ht = _height(tree->left);
	right_ht = _height(tree->right);

	if (left_ht >= right_ht)
		return (left_ht + 1);
	else
		return (right_ht + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, return 0
 */

size_t _tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (_height(tree) - 1);
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

   int l_height = binary_tree_height(tree->left);
   int r_height = binary_tree_height(tree->right);


   return (l_height - r_height);
}