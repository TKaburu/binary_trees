#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_node - Creates a binary tree node
 * @parent: pointer to the parent of the created node
 * @value: Value of the new created node
 *
 * Return: The new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* allocate memory for new node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	/* Make sure if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	/* new node doesn't have children but a value and parent*/
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
