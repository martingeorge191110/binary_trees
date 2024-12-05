#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the count number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
   size_t total_count;
   if (tree == NULL)
      return (0);

   if (tree->right == NULL && tree->left == NULL)
      return (1);

   total_count = binary_tree_leaves(tree->right) + binary_tree_leaves(tree-> left);
   return (total_count);
}
