#include "binary_trees.h"

/**
 * bst_search - search a binary search tree for a value
 * @tree: root to tree
 * @value: value to search for
 * Return: pointer to the node containing the value or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *) tree);
	if (tree->n > value)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
