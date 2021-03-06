#include "binary_trees.h"

/**
 * _bst_search - search a binary search tree for a value
 * @tree: root to tree
 * @value: value to search for
 * Return: pointer to the node containing the value or NULL
 */
bst_t *_bst_search(bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return (tree);
	if (tree->n > value)
		return (_bst_search(tree->left, value));
	return (_bst_search(tree->right, value));
}

/**
 * _bst_replace - finde the replace value
 * @tree: root to tree
 * Return: pointer to the node containing the value or NULL
 */
bst_t *_bst_replace(bst_t *tree)
{
	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (tree);
	return (_bst_replace(tree->left));
}


/**
 * swap_root - changes_parent of deleted node to the replace node
 * @del_node: node to be deleted
 * @r_node: node to be replaced
 * Return: r_node
 */
bst_t *swap_root(bst_t *del_node, bst_t *r_node)
{
	r_node->left = del_node->left;
	if (del_node->left)
		del_node->left->parent = r_node;
	if (del_node->right == r_node)
	{
		r_node->parent = NULL;
		free(del_node);
		return (r_node);
	}
	if (r_node->right)
		r_node->right->parent = r_node->parent;
	r_node->parent->left = r_node->right;
	r_node->right = del_node->right;
	del_node->right->parent = r_node;
	free(del_node);
	r_node->parent = NULL;
	return (r_node);
}

/**
 * swap_reg - changes_parent of deleted node to the replace node
 * @del_node: node to be deleted
 * @r_node: node to be replaced
 * Return: nothing
 */
void swap_reg(bst_t *del_node, bst_t *r_node)
{
	bst_t *parent_of_del, *parent_of_rep;

	parent_of_del = del_node->parent;
	parent_of_rep = r_node->parent;
	if (del_node->right == r_node)
	{
		r_node->left = del_node->left;
		if (del_node->left)
			del_node->left->parent = r_node;
		r_node->parent = del_node->parent;
		if (del_node->parent->left == del_node)
			del_node->parent->left = r_node;
		else
			del_node->parent->right = r_node;
		free(del_node);
		return;
	}
	if (r_node->right)
	{
		r_node->right->parent = parent_of_rep;
		parent_of_rep->left = r_node->right;
	}
	else
		parent_of_rep->left = NULL;
	r_node->left = del_node->left;
	if (del_node->left)
		del_node->left->parent = r_node;
	r_node->right = del_node->right;
	del_node->right->parent = r_node;
	r_node->parent = parent_of_del;
	if (parent_of_del->left == del_node)
		parent_of_del->left = r_node;
	else
		parent_of_del->right = r_node;
	free(del_node);
}


/**
 * bst_remove - search a binary search tree for a value and remove it
 * @root: root to tree
 * @value: value to search for
 * Return: pointer to the node that takes its place or NULL
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node_d, *temp, *node_r;

	if (root == NULL)
		return (NULL);
	node_d = _bst_search(root, value);
	if (node_d == NULL)
		return (NULL);
	node_r = _bst_replace(node_d->right);
	if (node_r == NULL)
	{
		temp = node_d->left;
		if (node_d == root)
		{
			if (temp)
				temp->parent = NULL;
			free(node_d);
			return (temp);
		}
		else
		{
			if (node_d->parent->left == node_d)
				node_d->parent->left = temp;
			else
				node_d->parent->right = temp;
			if (temp)
				temp->parent = node_d->parent;
			free(node_d);
			return (root);
		}
	}
	if (node_d->parent == NULL)
		return (swap_root(node_d, node_r));
	swap_reg(node_d, node_r);
	return (root);
}
