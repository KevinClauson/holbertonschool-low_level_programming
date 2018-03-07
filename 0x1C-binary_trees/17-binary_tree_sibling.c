#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: is a pointer to the node
 * Return: value of sibling or 0 no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	temp = node->parent;
	if (temp->left == NULL || temp->right == NULL)
		return (NULL);
	if (temp->left == node)
		return (temp->right);
	return (temp->left);
}
