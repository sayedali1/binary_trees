#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to thee root of the tree
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int Lheight = 0;
	int Rheight = 0;

	if (!tree)
		return (0);
	Lheight = binary_tree_size(tree->left);
	Rheight = binary_tree_size(tree->right);
	return (Lheight + Rheight + 1);
}
