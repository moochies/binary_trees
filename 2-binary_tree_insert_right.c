#include "binary_trees.h"
/**
 *binary_tree_insert_left - a function that inserts a left-child on a node.
 *@parent: pointer to the parent of the node to insert into.
 *@value: value to insert to the node.
 *Return: pointer to the node inserted or NULL on failure.
 */



binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	if (parent == NULL)
		return (NULL);

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;


	if (newnode->parent->left == NULL)
	{
		newnode->left = newnode->parent->left;
		newnode->parent->left = newnode;
	}
	else
	{
		temp = newnode->parent->left;
		newnode->parent->left->parent = newnode;
		newnode->parent->left = newnode;
		newnode->left = temp;
	}

	return (newnode);
}
