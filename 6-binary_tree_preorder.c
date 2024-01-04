#include "binary_trees.h"

/**
 * binary_tree_preorder - This function transverse using preorder method
 * @tree: This is the pointer to the root not
 * @func: This is the pointer to the function called on each node
 * 
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree == NULL)
            return;

        /*preorder = root->left->right*/
        func(tree->n);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
}