#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: nb_leaf  or  0 if tree null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nb_leaf = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	nb_leaf += binary_tree_leaves(tree->left);
	nb_leaf += binary_tree_leaves(tree->right);
	return (nb_leaf);
}
