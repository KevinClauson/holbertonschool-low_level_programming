#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds common ancestor of 2 nodes
 * @first: is a pointer to a node
 * @second: is a pointer to a node
 * Return: ancestor or Null if none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	while (first != NULL)
	{
		temp = second;
		while (temp != NULL)
		{
			if (first == temp)
				return ((binary_tree_t *) temp);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
