#include "binary_trees.h"

/**
 * rec_t - checks if tree is a binary search tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if binary search tree and 0 if not
 */
int rec_t(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->parent != NULL)
	{
		if (tree->parent->right == tree)
		{
			if (tree->n <= tree->parent->n)
				return (0);
			if (tree->parent->parent != NULL)
			{
				if (tree->parent->parent->left == tree->parent
				    && tree->n >= tree->parent->parent->n)
					return (0);
			}
		}
		if (tree->parent->left == tree)
		{
			if (tree->n >= tree->parent->n)
				return (0);
			if (tree->parent->parent != NULL)
			{
				if (tree->parent->parent->right == tree->parent
				    && tree->n <= tree->parent->parent->n)
					return (0);
			}
		}
	}
	return (rec_t(tree->left) && rec_t(tree->right));
}

/**
 * binary_tree_is_bst - checks if tree is a binary search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if binary search tree and 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (rec_t(tree))
		return (1);
	return (0);
}
