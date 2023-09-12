#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a right child node into a binary tree.
 * @parent: Pointer to the parent node.
 * @value: The value to store in the new right child node.
 *
 * Return: A pointer to the newly inserted right child node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
