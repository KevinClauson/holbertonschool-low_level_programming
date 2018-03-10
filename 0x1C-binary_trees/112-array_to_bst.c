#include "binary_trees.h"

/**
 * array_to_bst - create a binary search tree from array of ints
 * @array: an array of ints
 * @size: size of array
 * Return: pointer to the root of tree
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
