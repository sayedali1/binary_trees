#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: pointer to parent node
 * @value: value we wanna add to the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (!parent)
		return (NULL);

	NewNode = malloc(sizeof(binary_tree_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = parent->left;
	NewNode->right = NULL;
	parent->left = NewNode;

	if (NewNode->left)
		NewNode->left->parent = NewNode;

	return (NewNode);
}
