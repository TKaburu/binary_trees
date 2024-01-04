#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the number of leaves
 * on a binary tree
 * @tree: This is a pointer to the root node
 *
 * Return: The sum of leaves, 1 if node is not a leaf or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
