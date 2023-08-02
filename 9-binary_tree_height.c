#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree whose height is to be measured
 * Return: height of tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_1 = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);
	height_1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_1 = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_1 > height_r ? height_1 : height_r);
}
