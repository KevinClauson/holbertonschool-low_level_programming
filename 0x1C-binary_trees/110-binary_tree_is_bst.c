#include <limits.h>
#include "binary_trees.h"

/**
 * rec_t - checks if tree is a binary search tree
 * @tree: pointer to the root node of the tree to traverse
 * @min: min value
 * @max: max value
 * Return: 1 if binary search tree and 0 if not
 */
int rec_t(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= min || tree->n >= max)
		return (0);

	return (rec_t(tree->left, min, tree->n)
		&& rec_t(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - checks if tree is a binary search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if binary search tree and 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (rec_t(tree, INT_MIN, INT_MAX))
		return (1);
	return (0);
}
