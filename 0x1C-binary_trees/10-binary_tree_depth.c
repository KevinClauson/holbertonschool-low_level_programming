#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node is a pointer to the node to measure the depth
 * Return: depth as a size_t or 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	depth = node->parent ? 1 + binary_tree_depth(node->parent) : 0;
	return (depth);
}
