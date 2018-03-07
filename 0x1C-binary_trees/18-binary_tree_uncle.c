#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: is a pointer to the node
 * Return: value of uncle or Null for no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	temp = node->parent->parent;
	if (temp->left == NULL || temp->right == NULL)
		return (NULL);
	if (temp->left == node->parent)
		return (temp->right);
	return (temp->left);
}
