#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate a tree right
 * @tree: pointer to the node to rotate
 * Return: pointer to rotated node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *new_root;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	new_root = tree->left;
	temp = new_root->right;
	new_root->right = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;
	tree->left = temp;
	if (temp)
		temp->parent = tree;
	return (new_root);
}
