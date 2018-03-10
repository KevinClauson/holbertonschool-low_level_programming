#include "binary_trees.h"

/**
 * bst_insert - inserts value in a binary search tree
 * @tree: pointer to the root node of the tree to insert
 * @value: value of pointer to be inserted
 * Return: pointer to the created node or null if duplicate value
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root;
	size_t i;

	root = NULL;
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		bst_insert(&root, array[i]);
	return (root);
}
