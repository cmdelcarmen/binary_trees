#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function inserts a node as the left-child
 * of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: Created node or NULL on failure.
 *
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	if (parent == NULL)
		return (NULL);

	/*creates new node and assigns the parent to the ptr*/
	ptr = binary_tree_node(parent, value);
	if (ptr == NULL)
		return (NULL);

	/**
	 * check to see if parent already has a left-child, if it does
	 * new node must take its place. the old left-child must be set
	 * as the left-child of the new node
	 */
	if (parent->left != NULL)
	{
		ptr->left = parent->left;
		parent->left->parent = ptr;
	}
	parent->left = ptr;

	return (ptr);

}
