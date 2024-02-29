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

#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
*
* @tree: Pointer to the root node of the tree to traverse.
*
* Return: Height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right, height;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	height = MAX(left, right) + 1;

	return (height);
}
