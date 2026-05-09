#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: Pre-order traversal visits the current node first,
 * then the left subtree, then the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* 1. Visit the root/current node */
	func(tree->n);

	/* 2. Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* 3. Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
