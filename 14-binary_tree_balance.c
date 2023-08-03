#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to thee root of the tree
 * Return: the balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int Lheight = 0;
	int Rheigt = 0;

	Lheight = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	Rheigt = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (Lheight - Rheigt);
}
