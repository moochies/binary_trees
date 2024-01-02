#include "binary_trees.h"
/**
 *binary_tree_leaves - function that counts the
  *                   leaves of a binary tree.
 *@tree: a pointer to the root node of the tree to count leaves.
 *Return: number of leaves or 0 if tree is null.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t leftLeaves = 0;
	size_t rightLeaves = 0;

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftLeaves = binary_tree_leaves(tree->left);
	rightLeaves = binary_tree_leaves(tree->right);

	return (leftLeaves + rightLeaves);
}
