#include "binary_trees.h"

/**
 * binary_tree_size - This function calculates the size of a binary tree
 * @tree: This is a pointer to the root node
 *
 * Return: size of tree or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_subtree, right_subtree;

	if (tree == NULL)
		return (0);

	left_subtree = binary_tree_size(tree->left);
	right_subtree = binary_tree_size(tree->right);

	/* + 1 for the current node*/
	return (left_subtree + right_subtree + 1);
}
