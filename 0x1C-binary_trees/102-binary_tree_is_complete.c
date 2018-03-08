#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root of tree.
 * Return: size as a size_t or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}

/**
 * rec_levelorder - finds if complete or not
 * @tree: is pointer to root of tree
 * @index: is the index of the node
 * @size: is number of nodes of tree
 * Return: 1 if complete 0 if not.
 */
int rec_levelorder(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (rec_levelorder(tree->left, 2 * index + 1, size) &&
		rec_levelorder(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: is a pointer to root node
 * Return: 1 if complete 0 otherwise or if null.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, index;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	index = 0;
	if (rec_levelorder(tree, index, size))
		return (1);
	return (0);
}
