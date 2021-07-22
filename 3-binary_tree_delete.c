#include "binary_trees.h"

/**
* binary_tree_delete - Function deletes an entire binary tree.
* @tree: Pointer to the root of the binary tree.
*
* If *tree is NULL, nothing is done.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		free(tree);
	}
}

