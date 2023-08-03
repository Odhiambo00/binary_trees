#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to root node of tree to be checked
 * Return - 1 if tree is complete, 0 if not complete or tree is NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (ic_helper(tree, 0, size));
}

/**
 * ic_helper - checks if a binary tree is complete
 * @tree: pointer to root node of tree to be checked
 * @index: node index to be checked
 * @size: number of nodes in tree
 * Return: 1 if tree is complete, 0 if not complete or tree is NULL
 */

int ic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (ic_helper(tree->left, 2 * index + 1, size) &&
			ic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to be measured
 * Return: size of tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
