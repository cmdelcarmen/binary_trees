#include "binary_trees.h"

/**
* binary_tree_size - Function that measures the size of a
* binary tree
* @tree: Pointer to the root node of the tree to measure
* the size
* Return: The size of a tree or 0 if NULL
*
* If tree is NULL, the function must return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	return (right + left + 1);
}
