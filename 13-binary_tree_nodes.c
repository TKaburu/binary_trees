#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes with 1 child
 * @tree: This is a pointer to the root node
 *
 * Return: The number of nodes with 1 child or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = 0;

	/* left and right child exist add to count*/
	if (tree->left != NULL)
		count++;
	else if (tree->right != NULL)
		count++;

	count = count + binary_tree_nodes(tree->left);
	count = count + binary_tree_nodes(tree->right);

	return (count);
}
