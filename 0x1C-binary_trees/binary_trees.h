#ifndef __TREES__H
#define __TREES__H
/***************************** Libraries ***********************/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/****************** Structs *******************************/
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* binary search tree */
typedef struct binary_tree_s bst_t;

/* AVL tree */
typedef struct binary_tree_s avl_t;

/* Max binary heap */
typedef struct binary_tree_s heap_t;
/*********************** Function Prototypes *****************************/
/* Print function */
void binary_tree_print(const binary_tree_t *);
/* create a node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* inserts a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* inserts a node as the right-child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* deletes an entire binary tree */
void binary_tree_delete(binary_tree_t *tree);
/* checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);
/* checks if node is root */
int binary_tree_is_root(const binary_tree_t *node);
/* goes through a binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* goes through a binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* goes through a binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);
/* measures the depth of a node in a binary tree */
size_t binary_tree_depth(const binary_tree_t *node);
/* measures the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);
/* counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* counts the nodes with at least 1 child in a binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* measures the balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree);
/* checks if a binary tree is full  */
int binary_tree_is_full(const binary_tree_t *tree);
/* checks if a binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* finds sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
#endif
