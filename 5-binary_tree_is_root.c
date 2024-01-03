#include "binary_trees.h"

/**
 * binary_tree_is_root - This function checks if a node is the root
 * @node: The node to be checked
 *
 * Return: 1 if the node is a root or 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*root has no parent*/

	if (node == NULL)
		return (0);

	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}
