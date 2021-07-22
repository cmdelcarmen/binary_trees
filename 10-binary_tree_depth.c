#include "binary_trees.h"

/**
* binary_tree_depth - Function measures the depth of a node in a
* binary tree
* @tree: Pointer to the node to measure the depth
* Return: Depth of tree.
* If *tree is NULL, return 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
