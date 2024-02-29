#include "binary_trees.h"

/**
* binary_tree_leaves - count the leaves of a binary tree.
*
* @tree: Pointer to the root node of the tree to traverse.
*
* Return: leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
