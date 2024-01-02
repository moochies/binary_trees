#include "binary_trees.h"
/**
 *binary_tree_node - a function that creates binary tree node.
 *@parent: pointer to the parent of the node to create.
 *@value: value to insert to the node.
 *Return: pointer to the node created or NULL on failure.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{


	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
