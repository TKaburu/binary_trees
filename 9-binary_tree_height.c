#include "binary_trees.h"

/**
 * binary_tree_height - This function calculates the height of a binary tree
 * @tree: This is a pointer to the root node
 *
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, left_child_height, right_child_height;

	if (tree == NULL)
		return (0);

	/* find the height of each subtree */
	left_child_height = binary_tree_height(tree->left);
	right_child_height = binary_tree_height(tree->right);

	/* Look for the max height and use that */
	if  (left_child_height > right_child_height)
		height = left_child_height;
	else
		height = right_child_height;

	/* +1 cause of the roots edge? */
	return (height + 1);
}
