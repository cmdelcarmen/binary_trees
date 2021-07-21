#include "binary_trees.h"

/**
 * binary_tree_node - Function creates a binary node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: Value to put in the node.
 * Return: Pointer to the new node or NULL on failure.
 *
 * When created, a node does not have any child.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	if (value == '\0')
		return (NULL);

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = value;
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;

	return (ptr);
}
