#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
*
* @parent: pointer to the parent node
* @value: value to put in the node
* Return: pointer to the new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL;

	new_n = malloc(sizeof(binary_tree_t));
	if (!new_n)
	{
		return (NULL);
	}

	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = NULL;

	return (new_n);
}
