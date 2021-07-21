#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function inserts a node as the right-child
 * of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: Created node or NULL on failure.
 *
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);

	/*creates new node and assigns the parent to the ptr*/
	ptr = binary_tree_node(parent, value);
	if (ptr == NULL)
		return (NULL);

	/**
	 * check to see if parent already has a right-child, if it does
	 * new node must take its place. the old right-child must be set
	 * as the right-child of the new node
	 */
	if (parent->right != NULL)
	{
		ptr->right = parent->right;
		parent->right->parent = ptr;
	}
	parent->right = ptr;

	return (ptr);

}
