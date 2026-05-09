#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: Post-order traversal visits the left subtree first,
 * then the right subtree, and finally the current node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* 1. Traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* 2. Traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* 3. Visit the root/current node */
	func(tree->n);
}
