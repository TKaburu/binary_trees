#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function inserts a node as a
 * left-child
 * @parent: Pointer to the parent of the inserted left child node
 * @value: The data of the new inserted left child node
 *
 * Return: New node or NULL if parent is NULL or if function fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	/* If parent is NULL return Null*/
	if (parent == NULL)
		return (NULL);
	/* Create left node by calling creation function */
	left_node = binary_tree_node(parent, value);

	if (parent->left) /* if there parent already has a child*/
	{
		/*set the left_nodes left child as the parents left child*/
		left_node->left = parent->left;
		/* sets the current left node to the new node*/
		parent->left->parent = left_node;
	}
	/* left_node bcomes the parents left child*/
	parent->left = left_node;
	return (left_node);
}
