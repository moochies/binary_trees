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

	leftHeight += 1 + binary_tree_height(tree->left);
	rightHeight += 1 + binary_tree_height(tree->right);

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}



/**
 *binary_tree_balance - function that measures the
 *			balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *Return: 0 if tree is null.
 */



int binary_tree_balance(const binary_tree_t *tree)
{

	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}



/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 1;

	if (!tree || binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left)
		i = i & binary_tree_is_perfect(tree->left);
	if (tree->right)
		i = i & binary_tree_is_perfect(tree->right);
	return (i);
}
