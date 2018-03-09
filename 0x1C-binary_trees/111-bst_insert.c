#include "binary_trees.h"

/**
 * rec_insert - insert node in bst
 * @tree: the root of tree
 * @value: value of node to be inserted
 * Return: pointer to inserted Node or NULL if duplicate
 */
bst_t *rec_insert(bst_t *tree, int value)
{
	if (tree->n == value)
		return (NULL);
	if (tree->n < value)
	{
		if (tree->right == NULL)
		{
			tree->right = binary_tree_node(tree, value);
			return (tree->right);
		}
		return (rec_insert(tree->right, value));
	}
	else
	{
		if (tree->left == NULL)
		{
			tree->left = binary_tree_node(tree, value);
			return (tree->left);
		}
		return (rec_insert(tree->left, value));
	}
}

/**
 * bst_insert - inserts value in a binary search tree
 * @tree: pointer to the root node of the tree to insert
 * @value: value of pointer to be inserted
 * Return: pointer to the created node or null if duplicate value
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}
	return (rec_insert(*tree, value));
}
