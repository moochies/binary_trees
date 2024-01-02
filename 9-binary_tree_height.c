#include "binary_trees.h"
/**
 *binary_tree_height - function that measures the height of a binary tree.
 *@tree: a pointer to the root node of the tree to mearsure height.
 *Return: height of the tree or 0 if tree is null.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leftHeight += 1 + binary_tree_height(tree->left);
	if (tree->right)
		rightHeight += 1 + binary_tree_height(tree->right);

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}
