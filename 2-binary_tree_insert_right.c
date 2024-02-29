#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as the right child of another node
* If the parent already has a right child, it is moved down one level
* and the new node takes its place
*
* @parent: A pointer to the parent node to insert the right-child in
* @value: The value to store in the new node
*
* Return: Pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_n = binary_tree_node(parent, value);
	if (!new_n)
		return (NULL);

	if (parent->right != NULL)
	{
		new_n->right = parent->right;
		parent->right->parent = new_n;
	}

	parent->right = new_n;
	return (new_n);
}
