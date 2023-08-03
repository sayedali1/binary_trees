#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to thee root of the tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int Lleaf = 0;
	int Rleaf = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	Lleaf += binary_tree_leaves(tree->left);
	Rleaf += binary_tree_leaves(tree->right);
	return (Lleaf + Rleaf);
}
