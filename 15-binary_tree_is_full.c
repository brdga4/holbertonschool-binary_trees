#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If it is a leaf node, it is full by definition */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If it has two children, check if both subtrees are full */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}

	/* If it has only one child, it is NOT full */
	return (0);
}
