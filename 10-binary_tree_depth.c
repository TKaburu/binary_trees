#include "binary_trees.h"
/**
 * binary_tree_depth - Calculates the depth of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Depth of the binary tree or 0 if tree == NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		dep++;
	}
	return (dep);
}
