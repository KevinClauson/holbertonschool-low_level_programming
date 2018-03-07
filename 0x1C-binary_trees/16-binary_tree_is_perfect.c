#include "binary_trees.h"

/**
 * rec_perfect - recursive check
 * @depth: the depth of the tree
 * @level: the level of tree
 * return: 1 if perfect 0 if not
 */
int rec_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return rec_perfect(tree->left, depth, level + 1) &&
		rec_perfect(tree->right, depth, level + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root of tree to check
 * Return: 1 if perfect 0 if not or null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);
	depth = 0;
	temp = tree;
	while (temp != NULL)
	{
		depth += 1;
		temp = temp->left;
	}
	return (rec_perfect(tree, depth, 0));
}
