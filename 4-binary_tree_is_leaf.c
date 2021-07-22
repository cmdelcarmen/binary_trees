#include "binary_trees.h"

/**
* binary_tree_is_leaf - Function checks if a node is a leaf,
* leaf means that it has no children
* @node: Pointer to the node to check
* Return: 1 if the node is leaf, otherwise 0, NULL returns 0 as well
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
