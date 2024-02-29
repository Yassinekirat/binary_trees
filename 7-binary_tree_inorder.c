#include "binary_trees.h"

/**
* binary_tree_inorder - Traverse a binary tree using in orderr traversal.
*
*
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to the function to call for each node.
*        The function must accept an integer argument and return void.
*
* Return: Nothing.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree == NULL || func == NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
