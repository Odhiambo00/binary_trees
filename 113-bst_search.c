#include "binary_trees.h"

/**
 * bst_search - searches for a value in BST
 * @tree: pointer to root node of BST to be searched
 * @value: value to be searched in tree
 * Return: pointer to node containing an int equal to `value` else NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}
