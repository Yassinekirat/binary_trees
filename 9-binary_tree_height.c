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

	if (tree && !tree->left && !tree->right)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	height = MAX(left, right) + 1;

	return (height);
}
