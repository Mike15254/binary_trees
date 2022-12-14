

#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts child node to right of parent node
 *
 * @parent: the parent node
 * @value: value that the new node will have
 *
 * Return: child node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);

	child->left = NULL;
	child->right = NULL;
	child->parent = parent;
	child->n = value;

	if (parent->right)
	{
		child->right = parent->right;
		parent->right->parent = child;
	}
	parent->right = child;

	return (child);
}
