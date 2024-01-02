#include "binary_trees.h"
/**
 *binary_tree_depth - function that measures the
  *                   depth of a node in a binary tree.
 *@tree: a pointer to the root node of the tree to mearsure depth.
 *Return: depth of the tree or 0 if tree is null.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree->parent)
		return (0);
	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);

	return (depth);

}
