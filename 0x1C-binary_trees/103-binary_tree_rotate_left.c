#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate a tree left
 * @tree: pointer to the node to rotate
 * Return: pointer to rotated node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *new_root;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	new_root = tree->right;
	temp = new_root->left;
	new_root->left = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;
	tree->right = temp;
	return (new_root);
}
