#include"binary_trees.h"
/**
 * binary_tree_is_root - is a function that checks if a given node is a root
 * @node: is a pointer to the node to check.
 * Return: 1 if root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->parent == NULL) ? 1 : 0;
}
