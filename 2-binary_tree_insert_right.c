#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserting node at the right
 *
 * @parent: pointer to the parent
 * @value: value of the node
 *
 * Return: insert node at the right
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}
