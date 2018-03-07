#include "binary_trees.h"

/**
 * rec_size - recursive functiont that returns size
 * @tree: node to tree;
 * @size: size of tree;
 * Return: returns size of tree;
 */
size_t rec_size(const binary_tree_t *tree, size_t size)
{
	if (!tree)
		return 0;
	return 1 + rec_size(tree->left, size) + rec_size(tree->right, size);
}


/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node is a pointer to the node to measure the depth
 * Return: depth as a size_t or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	return rec_size(tree, size);
}
