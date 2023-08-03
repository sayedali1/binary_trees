#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: pointer to thee root of the tree
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}