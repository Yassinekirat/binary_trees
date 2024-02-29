#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a binary tree.
*
* @tree: Pointer to the root node of the tree to traverse.
*
* Return: depth.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (!tree->parent)
	{
		return (0);
	}
	else
	{
		depth = binary_tree_depth(tree->parent) + 1;
	}
	return (depth);
}
