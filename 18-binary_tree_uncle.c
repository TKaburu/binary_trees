#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: The pointer to the node to find the sibling
 *
 * Return: siblin or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Need to know if its a left child or right */
	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}

/**
 * binary_tree_uncle - This function searches for the uncle
 * @node: Pointer to the node of the uncle we are searching for
 *
 * Return: uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	/*uncle = sibling of parent */
	if (node == NULL)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);

	return (uncle);
}
