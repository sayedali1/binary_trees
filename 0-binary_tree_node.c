#include "binary_trees.h"
/**
 * binary_tree_node - t creates a binary tree node
 * @parent: pointer to parent node
 * @value: value we wanna add to the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = malloc(sizeof(binary_tree_t));
	if (!NewNode)
		return (NULL);
	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;

	return (NewNode);
}
