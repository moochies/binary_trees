#include "binary_trees.h"
/**
 *binary_tree_nodes - function that counts the nodes with
  *                     at least 1 child in a binary tree
 *@tree: a pointer to the root node of the tree to count the number of nodes.
 *Return: number of nodes or 0 if tree is null.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		int leftNodes = binary_tree_nodes(tree->left);
		int rightNodes = binary_tree_nodes(tree->right);

		return (1 + leftNodes + rightNodes);
	}
	else
	{
		return (0);
	}
}
