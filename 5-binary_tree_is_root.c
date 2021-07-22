#include "binary_trees.h"

/**
* binary_tree_is_root - Checks to see if a given node is a root
* @node: Pointer to the node to check
* Return: 1 if the node is a root, 0 otherwide or if its NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);

	return (1);
}
