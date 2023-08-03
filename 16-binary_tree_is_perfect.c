#include "binary_trees.h"

/**
*_pow_recursion - function that returns the
*value of x raised to the power of y.
*@x: int we want to cal the pow for
*@y: the power of x
*Return: 1 if 0, -1 if less than 1, pow otherwise
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
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
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to thee root of the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int Lheight = 0;
	int Rheigt = 0;

	Lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	Rheigt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (Lheight > Rheigt ? Lheight : Rheigt);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to thee root of the tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int nodes = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	return (nodes == (_pow_recursion(2, height + 1) - 1));
}
