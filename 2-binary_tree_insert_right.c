#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - a function that insersts a node as
 * the right-child of another node.
 * @parent: a pointer to the parent node to insert the right child in.
 * @value: the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = parent->right;
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
