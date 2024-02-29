#include "binary_trees.h"

/**
* binary_tree_balance -  measures the balance factor of a binary tree
*
* @tree: Pointer to the root node of the tree to traverse.
*
* Return: balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (!tree)
		return (0);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);

}
