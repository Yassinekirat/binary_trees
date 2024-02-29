#include "binary_trees.h"

/**
* binary_tree_preorder - Traverse a binary tree using pre-order traversal.
*
*
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to the function to call for each node.
*        The function must accept an integer argument and return void.
*
* Return: Nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree == NULL || func == NULL))
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
