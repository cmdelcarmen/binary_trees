#include "binary_trees.h"

/**
 * tree_height - Function measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: The height, if tree is NULL, it must return 0.
 */
size_t tree_height(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left) + 1;
	right_height = tree_height(tree->right) + 1;

	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);

	return (0);
}

/**
* binary_tree_balance - Function that measures the balance
* factor of a binary tree
* of a binary tree.
* @tree: Pointer to the root node of the tree to measure the
* balance factor.
* Return: The balance factor, if tree is NULL, it must return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int rh, lh;

	if (tree == NULL)
		return (0);

	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	return (lh - rh);
}
