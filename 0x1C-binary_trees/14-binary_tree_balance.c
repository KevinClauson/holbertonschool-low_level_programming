#include "binary_trees.h"

/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root of tree to measure
 * Return:  of nodes or 0 if null
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + _binary_tree_height(tree->right) : 0;
	return (height_left > height_right ? height_left : height_right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root of tree to measure
 * Return: what the blance is or 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = right = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + _binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + _binary_tree_height(tree->right);
	return (left - right);
}
