#include <limits.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: the highet in size_t or 0 if null.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_left > height_right ? height_left : height_right);
}

/**
 * rec_t - checks if tree is a binary search tree
 * @tree: pointer to the root node of the tree to traverse
 * @min: min value
 * @max: max value
 * @depth: current depth
 * @d_max: max height of tree
 * Return: 1 if binary search tree and 0 if not
 */
int rec_t(const binary_tree_t *tree, int min, int max, int depth, int d_max)
{
	if (tree == NULL)
	{
		depth -= 1;
		if (d_max - depth > 1 || d_max - depth < -1)
			return (0);
		return (1);
	}
	if (tree->n <= min || tree->n >= max)
		return (0);
	return (rec_t(tree->left, min, tree->n, depth + 1, d_max)
		&& rec_t(tree->right, tree->n, max, depth + 1, d_max));
}

/**
 * binary_tree_is_avl - checks if tree is a AVL tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if AVL tree and 0 if not
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	return (rec_t(tree, INT_MIN, INT_MAX, 0, height));
}
