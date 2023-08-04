#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: pointer to parent node
 * @value: value we wanna add to the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (!parent)
		return (NULL);

	NewNode = malloc(sizeof(binary_tree_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->right = parent->right;
	NewNode->left = NULL;
	parent->right = NewNode;

	if (NewNode->right)
		NewNode->right->parent = NewNode;

	return (NewNode);
}
