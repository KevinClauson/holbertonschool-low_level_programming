#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root of tree to count
 * Return: number of nodes or 0 if null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree && tree->left == NULL && tree->right == NULL)
		return (0);

	return (1 + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
