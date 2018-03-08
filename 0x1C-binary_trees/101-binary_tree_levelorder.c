#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: the highet in size_t or 0 if null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_left > height_right ? height_left : height_right);
}

/**
 * rec_levelorder - appllies function to nodes on a certain level
 * @tree: is pointer to root of tree
 * @level: is the level to print
 * @func: is func to be applied to the data element in node
 * @depth: is the depth of the node
 * Return: nothing
 */
void rec_levelorder(const binary_tree_t *tree, void (*func)(int), size_t level,
		    size_t depth)
{
	if (tree == NULL)
		return;
	if (level == depth)
	{
		func(tree->n);
		return;
	}
	rec_levelorder(tree->left, func, level, depth + 1);
	rec_levelorder(tree->right, func, level, depth + 1);
}

/**
 * binary_tree_levelorder - finds common ancestor of 2 nodes
 * @tree: is a pointer to root node
 * @func: is functçion to be applied
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	if (height == 0)
		func(tree->n);
	else
	{
		for (i = 0; i <= height; ++i)
		{
			rec_levelorder(tree, func, i, 0);
		}
	}
}
