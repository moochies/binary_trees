#include "binary_trees.h"
/**
 *binary_tree_insert_left - a function that inserts a left-child on a node.
 *@parent: pointer to the parent of the node to insert into.
 *@value: value to insert to the node.
 *Return: pointer to the node inserted or NULL on failure.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
