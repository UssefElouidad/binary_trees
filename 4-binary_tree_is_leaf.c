#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf.
 * @node: is a pointer to the node to check.
 * Retrn: 1 if leaf 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->left == NULL && node->right == NULL) ? 1 : 0;
}
