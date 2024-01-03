#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function inserts node as the right child
 * @parent: This is the parent of the newly inserted left child
 * @value: The data stored of the new child
 *
 * Return: The new node r NULL if parent is Null or the function fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	/* call binary_tree_node to create right_node */
	right_node = binary_tree_node(parent, value);

	/* If parent->right has a child */
	if (parent->right)
	{
		/*set right child of right_node to parents right child */
		right_node->right = parent->right;
		/* set currents right childs parent to right_node*/
		parent->right->parent = right_node;
	}
	/*right_node becomes parents right child*/
	parent->right = right_node;
	return (right_node);
}
