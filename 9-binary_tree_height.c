#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to thee root of the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int Lheight = 0;
	int Rheigt = 0;

	if (!tree)
		return (0);

	Lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	Rheigt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (Lheight > Rheigt ? Lheight : Rheigt);
}
