#include "binary_trees.h"

/**
 * binary_tree_postorder - This function trasvers a Tree with Postorder method
 * @tree: This is a pointer to the root node
 * @func: This is a pointer to the function called on all nodes
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree == NULL || func == NULL)
                return;

        /*PostOrder = left->right->root*/
        binary_tree_postorder(tree->left, func);
        binary_tree_postorder(tree->right, func);
        func(tree->n);
}
