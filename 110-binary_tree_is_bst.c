#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks binary search tree validity of a binary tree
 * @tree: pointer to root node of tree to be checked
 * Return: 1 if tree is a valid binary search tree otherwise 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (isbst_helper(tree, INT_MIN, INT_MAX));
}

/**
 * isbst_helper - checks binary search tree validity of a binary tree
 * @tree: pointer to root node of tree to be checked
 * @min: lower bound of checked nodes
 * @max: upper bound of checked nodes
 * Return: 1 if tree is valid binary search tree otherwise 0
 */

int isbst_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (isbst_helper(tree->left, min, tree->n - 1) &&
			isbst_helper(tree->right, tree->n + 1, max));
}
