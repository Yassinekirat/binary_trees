#include "binary_trees.h"

/**
* binary_tree_nodes - count the nodes of a binary tree.
*
* @tree: Pointer to the root node of the tree to traverse.
*
* Return: nodes.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);
	nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	if (!(tree->left) && !(tree->right))
		return (nodes);
	else
		return (nodes + 1);


}
