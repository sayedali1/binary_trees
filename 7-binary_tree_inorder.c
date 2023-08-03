#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through
 * a binary tree using in-order traversal
 * @tree: pointer to thee root of the tree
 * @func: pointer to fun print
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
