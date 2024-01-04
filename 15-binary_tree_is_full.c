#include "binary_trees.h"

/**
 * binary_tree_is_full - This function checks if a binary tree is full
 * @tree: This is a pointer to the root node
 *
 * Return: 0 if tree == NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_child, right_child;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_child = binary_tree_is_full(tree->left);
	right_child = binary_tree_is_full(tree->right);

	return (left_child && right_child);
}
