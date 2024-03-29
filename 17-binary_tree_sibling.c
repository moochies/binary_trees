#include "binary_trees.h"
/**
 *binary_tree_sibling - function that finds the sibling of a node
 *@node: a pointer to the  node to find the sibling.
 *Return: null if node has no sibling/parent or node is null
 *          else return pointer to sibling.
 */



binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
