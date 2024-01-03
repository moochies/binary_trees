#include "binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the
 *		lowest common ancestor of two nodes
 * @first:  pointer to the first node
 * @second:  pointer to the second node
 * Return:  a pointer to the lowest common ancestor node of the two given nodes
 *          if no ancestor return null.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{

	const binary_tree_t *leftA, *rightA;

	for (leftA = first; leftA; leftA = leftA->parent)
	{
		for (rightA = second; rightA; rightA = rightA->parent)
		{
			if (leftA == rightA)
				return ((binary_tree_t *)leftA);
		}
	}

	return (NULL);
}
