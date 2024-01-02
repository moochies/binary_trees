#include "binary_trees.h"
/**
 *binary_tree_size - function that measures the
  *                   size of a binary tree.
 *@tree: a pointer to the root node of the tree to mearsure size.
 *Return: size of the tree or 0 if tree is null.
 */



size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (!tree)
		return (0);

	leftHeight += binary_tree_size(tree->left);
	rightHeight += binary_tree_size(tree->right);

	return (leftHeight + rightHeight + 1);
}
