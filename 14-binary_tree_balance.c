#include "binary_trees.h"

/**
* binary_tree_height - Function measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure the height.
* Return: The height, if tree is NULL, it must return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	right_height = binary_tree_balance(tree->right) + 1;
	left_height = binary_tree_balance(tree->left) + 1;

	return (right_height - left_height);
}
