#include "binary_trees.h"

/**
 * binary_tree_nodes - function that creates a binary tree node
 * @tree: pointer to the root tree
 * Return:nodes of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}


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
